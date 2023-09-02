function Triangulo(x1,y1,x2,y2,x3,y3,n)

plot([x1 x2], [y1 y2], 'k');
plot([x3 x2], [y3 y2], 'k');
plot([x1 x3], [y1 y3], 'k');
 
if(n~=0)
    
	dx1=(x2-x1)/2 + x1;
	dy1=(y2-y1)/2 + y1;
	
	dx2=(x3-x2)/2 + x2;
	dy2=(y2-y3)/2 + y3;
	
	dx3=(x3-x1)/2 + x1;
	dy3=(y3-y1)/2 + y1;
	
	X = [dx1 dx2 dx3]';
	Y = [dy1 dy2 dy3]';

	hold on;
	patch(X,Y,'k');
    
    
    Triangulo(dx1,dy1,x2,y2,dx2,dy2,n-1);
    Triangulo(x1,y1,dx1,dy1,dx3,dy3,n-1);
    Triangulo(dx3,dy3,dx2,dy2,x3,y3,n-1);

end