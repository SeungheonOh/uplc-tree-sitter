[
  [
    (lam
      mySub!2
      (lam
        mySub!1
        [
          [
            (builtin subtractInteger)
            [ [ (builtin subtractInteger) mySub!2 ] mySub!1 ]
          ]
          mySub!1
        ]
      )
    )
    (con integer 30)
  ]
  [
    [
      (lam
        myAdd!2
        (lam
          myAdd!1
          [
            [
              (builtin addInteger) [ [ (builtin addInteger) myAdd!2 ] myAdd!2 ]
            ]
            myAdd!1
          ]
        )
      )
      (con integer 10)
    ]
    (con integer 20)
  ]
]
