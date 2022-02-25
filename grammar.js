const UMINUS_PREC = 1;

module.exports = grammar({
    name: 'imp',
    extras: $ => [
        /\s/,
    ],
    conflicts: $ => [
    ],
    rules: {
        program: $ => $.stmt,
        stmt: $ => choice(
            $.skip,
            $.asgn,
            $.seq,
            $.if,
            $.while,
        ),
        skip: $ => 'skip',
        asgn: $ => seq(field('name',$.id),':=',$.aexp),
        id: $ => /[a-z]+/,
        seq: $ => prec.right(1,seq($.stmt,';',$.stmt,optional(';'))),
        if: $ => seq('if',
                     field('condition',$.bexp),
                     'then',
                     field('consequent',$.stmt),
                     'else',
                     field('alternative',$.stmt),
                     'end'),
        while: $ => seq('while',
                        field('condition',$.bexp),
                        'do',
                        field('body',$.stmt),
                        'end'),
        aexp: $ => choice(
            $.num,
            $.id,
            $.plus,
            $.minus,
            $.times,
            seq('(',$.aexp,')'),
        ),
        plus: $ => prec.left(1,seq($.aexp,'+',$.aexp)),
        minus: $ => prec.left(1,seq($.aexp,'-',$.aexp)),
        times: $ => prec.left(2,seq($.aexp,'*',$.aexp)),
        bexp: $ => choice(
            'true',
            'false',
            $.eqb,
            $.leb,
            $.negb,
            $.andb,
            seq('(',$.bexp,')'),
        ),
        eqb: $ => seq($.aexp,'=',$.aexp),
        leb: $ => seq($.aexp,'=<',$.aexp),
        negb: $ => prec.right(2,seq('~',$.bexp)),
        andb: $ => prec.right(1,seq($.bexp,'&&',$.bexp)),
        num: $ => /[0-9]+/,
    }

});

function sep(rule, separator) {
    return optional(sep1(rule, separator));
}

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
    return sep1(rule, ',');
}

function commaSep(rule) {
    return optional(commaSep1(rule));
}

