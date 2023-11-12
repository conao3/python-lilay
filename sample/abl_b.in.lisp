(defun main()
  (declare (-> () int))
  (let-read-int (a b c d)
    (print (if (and (<= a d) (<= c b))
                "Yes"
             "No"))))
