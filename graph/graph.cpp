t e m p l a t e   < t y p e n a m e   T >  
 c l a s s   g r a p h   {  
     p u b l i c :  
     s t r u c t   e d g e   {  
         i n t   f r o m ;  
         i n t   t o ;  
         T   c o s t ;  
     } ;  
  
     v e c t o r < e d g e >   e d g e s ;  
     v e c t o r <   v e c t o r < i n t >   >   g ;  
     i n t   n ;  
  
     f u n c t i o n < b o o l ( i n t ) >   i g n o r e ;  
  
     g r a p h ( i n t   _ n )   :   n ( _ n )   {  
         g . r e s i z e ( n ) ;  
         i g n o r e   =   n u l l p t r ;  
     }  
  
     v i r t u a l   i n t   a d d ( i n t   f r o m ,   i n t   t o ,   T   c o s t )   =   0 ;  
  
     v i r t u a l   v o i d   s e t _ i g n o r e _ e d g e _ r u l e ( c o n s t   f u n c t i o n < b o o l ( i n t ) >   & f )   {  
         i g n o r e   =   f ;  
     }  
  
     v i r t u a l   v o i d   r e s e t _ i g n o r e _ e d g e _ r u l e ( )   {  
         i g n o r e   =   n u l l p t r ;  
     }  
 } ; 