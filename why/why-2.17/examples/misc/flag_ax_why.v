(* This file was originally generated by why.
   It can be modified; only the generated parts will be overwritten. *)

Require Export Why.

(*Why type*) Definition color: Set.
Admitted.

(*Why logic*) Definition blue : color.
Admitted.

(*Why logic*) Definition white : color.
Admitted.

(*Why logic*) Definition red : color.
Admitted.

(*Why predicate*) Definition is_color  (c:color)
  := c = blue \/ c = white \/ c = red.

(*Why type*) Definition color_array: Set.
Admitted.

(*Why logic*) Definition acc : color_array -> Z -> color.
Admitted.

(*Why logic*) Definition upd : color_array -> Z -> color -> color_array.
Admitted.

(*Why logic*) Definition length : color_array -> Z.
Admitted.

(*Why axiom*) Lemma acc_upd_eq :
  (forall (a:color_array),
   (forall (i:Z), (forall (c:color), (acc (upd a i c) i) = c))).
Admitted.

(*Why axiom*) Lemma acc_upd_neq :
  (forall (a:color_array),
   (forall (i:Z),
    (forall (j:Z),
     (forall (c:color), (i <> j -> (acc (upd a j c) i) = (acc a i)))))).
Admitted.

(*Why axiom*) Lemma length_update :
  (forall (a:color_array),
   (forall (i:Z), (forall (c:color), (length (upd a i c)) = (length a)))).
Admitted.

(*Why predicate*) Definition monochrome  (t:color_array) (i:Z) (j:Z) (c:color)
  := (forall (k:Z), (i <= k /\ k < j -> (acc t k) = c)).

(*Why logic*) Definition Permutation :
  color_array -> color_array -> Z -> Z -> Prop.
Admitted.

(*Why axiom*) Lemma permut_refl :
  (forall (t:color_array),
   (forall (l:Z), (forall (r:Z), (Permutation t t l r)))).
Admitted.

(*Why axiom*) Lemma permut_swap :
  (forall (t:color_array),
   (forall (l:Z),
    (forall (r:Z),
     (forall (i:Z),
      (forall (j:Z),
       (l <= i /\ i <= r ->
        (l <= j /\ j <= r ->
         (Permutation t (upd (upd t i (acc t j)) j (acc t i)) l r)))))))).
Admitted.

(*Why axiom*) Lemma permut_sym :
  (forall (t1:color_array),
   (forall (t2:color_array),
    (forall (l:Z),
     (forall (r:Z), ((Permutation t1 t2 l r) -> (Permutation t2 t1 l r)))))).
Admitted.

(*Why axiom*) Lemma permut_trans :
  (forall (t1:color_array),
   (forall (t2:color_array),
    (forall (t3:color_array),
     (forall (l:Z),
      (forall (r:Z),
       ((Permutation t1 t2 l r) ->
        ((Permutation t2 t3 l r) -> (Permutation t1 t3 l r)))))))).
Admitted.
