t e m p l a t e   < t y p e n a m e   T >  
 c l a s s   d i g r a p h   :   p u b l i c   g r a p h < T >   {  
     p u b l i c :  
     u s i n g   g r a p h < T > : : e d g e s ;  
     u s i n g   g r a p h < T > : : g ;  
     u s i n g   g r a p h < T > : : n ;  
  
     d i g r a p h ( i n t   n )   :   g r a p h < T > ( n )   {  
     }  
  
     i n t   a d d ( i n t   f r o m ,   i n t   t o ,   T   c o s t   =   1 )   {  
         a s s e r t ( 0   < =   f r o m   & &   f r o m   <   n   & &   0   < =   t o   & &   t o   <   n ) ;  
         i n t   i d   =   e d g e s . s i z e ( ) ;  
         g [ f r o m ] . p u s h _ b a c k ( i d ) ;  
         e d g e s . p u s h _ b a c k ( { f r o m ,   t o ,   c o s t } ) ;  
         r e t u r n   i d ;  
     }  
 } ; 