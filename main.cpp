#include "Riz.h"
#include "Riz_cantonais.h"
#include "Vary_amin_anana.h"
#include "Vary_sosoa.h"

int main(){
	
	Riz*r1=new Riz_cantonais();
	Riz*r2=new Vary_amin_anana();
	Riz*r3=new Vary_sosoa();
	r1->prepare();
	r2->prepare();
	r3->prepare();
	delete(r1);
	delete(r2);
	delete(r3);
	
	return 0;
}
