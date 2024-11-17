(force
          [
            [
              (lam i!0 (lam i!0 i!1)) (delay (con data 10))
            ]
            (delay
              [ [ (builtin addInteger) (con integer 20) ] (con integer 20) ]
            )
          ]
        )
