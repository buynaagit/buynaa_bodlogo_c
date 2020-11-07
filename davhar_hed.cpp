#include <stdio.h>
main(){
	int d,a,t,k,uld;
	int nt;
	int dav,hed;
	nt=d*a;
	//davhariin too bolon ailiin toog oruulna.
	scanf("%d%d", &d,&a);
	// toot oruulna
	scanf("%d", &t);
		//oruulsan toot ni heden davhariin ail ve geh heseg.
		if(dav=t%a==0)
			dav=t/a;
		else
			dav=t/a+1;
	    uld=t%a;
	    //oruulsan toot ni heddeh haalga ve gedeeg heseg.
	    if(t%a==0)
	    hed=a;
	    else if(t%a!=0)
	    hed=uld;
	    
		printf("%d ", dav);		
		printf("%d\n", hed);
}

		
