#include<iostream>
#include <string>
using namespace std;

float soma (float num1,float num2){

return num1+num2;
}

float subtracao(float num1 ,float num2){
	
		return num1-num2;
}

float multiplicacao (float num1, float num2){
	
	return num1*num2;
}

float divisao (float num1,float num2){
		return num1/num2;
}

int main()

{
	
    bool bsenhadigitada;//Declaracao tipo booleana (true,false)
    string senhadeacesso="ifba2022";//String de armazenanmento de senha
    string senhadigitada;
    int opcoes,opcoesaritmeticas,informacoesdecontato;//Variaveis que irão armazenar alguma escolha feito pelo usuario
    float num1,num2;
    
    system("color 02");//Funcao para mudar cor do programa
   do{
   
	cout<<"Digite a senha: ";
	cin>>senhadigitada;
	
    if (senhadigitada==senhadeacesso) {//Se a senha digitada estiver correta o acesso liberado
    	
        cout<<"Acesso liberado \n "<<endl;
    }

    else {//Se a senha digitada não estiver correta o acesso será negado e o aplicativo será encerrado
        cout<<"Acesso negado \n Digite a senha novamente "<<endl;}
}while (senhadigitada!=senhadeacesso);
		
     
     cout<<"Escolha uma das opcoes\n"<<
    "Tecle (1) para acessar calculadora\n"<<
	"Tecle (2) para acessar os horarios das aulas\n"<<
	"Tecle (3) para acessar as informacoes de contato dos professores\n";
	
    cin>>opcoes;

    switch(opcoes) {

    case 1:
        cout <<"Digite um valor:";
        cin>>num1;
        cout <<"Digite o segundo valor:";
        cin>>num2;

         cout<<
		"Tecle(1) para adicao \n"<<
		"Tecle(2) para subtracao \n"<<
		"Tecle(3) para multiplicacao \n"<<
		"Tecle(4) para divisao \n";
        cin>>opcoesaritmeticas;
    }
        
    switch (opcoesaritmeticas) {
	
    case 1:
        cout<<" O valor da adicao dos valores e: "<< soma (num1,num2)<<endl;
        break;

    case 2:
        cout<< " O valor da subtracao dos valores e: "<<subtracao(num1,num2)<<endl;
        break;
    case 3:
        cout<< " O valor da multiplicao dos valores e: "<<multiplicacao(num1,num2)<<endl;
        break;
    
    case 4:
        cout<< " O valor da divisao dos valores e: "<<divisao (num1,num2)<<endl;
        break;
   
        
}
    
    switch(opcoes){
	
	  case 2:cout << 
	 "_______________"<<
	  "\nSegunda-feira\n" 
	  "18:50-19:35:Matematica aplicada\n"<<
	  "19:35-20:20:Matematica aplicada\n"<<
	  "20:20-20:30:Intervalo\n"<<
	  "20:30-21:15:Matematica aplicada\n"<<
	  "21:15-22:00:Fundamentos a informatica\n"<<
     "_______________"<<	    
      "\nTerca-feira\n"<<
	  "18:50-19:35:Fundamentos a informatica\n"<<
      "19:35-20:20:Fundamentos a informatica\n"<<
	  "20:20-20:30:Intervalo\n"<<
      "20:30-21:15:Ingles Instrumental modulo 1\n"<<
	  "21:15-22:00:Ingles Instrumental\n"<<
	 "_______________"<< 
	 "\nQuarta-feira\n"<<
	  "18:50 -19:35:Introducao a logica de progamacao\n"<<
	  "19:35-20:20:Introducao a logica de programacao\n"<<
	  "20:20-20:30:Intervalo\n"<<
	  "20:30-21:15:Introducao a logica de programcao\n"<<
	  "21:15-22:00:Fundamentos a informatica\n"<<
	 "_______________"<<
	 "\nQuinta-feira\n"<<
	  "18:50-19:35:Eletricidade e eletronica\n"<<
	  "19:35-20:20:Portugues aplicado modulo 1\n"<<
	  "20:20-20:30:Intervalo\n"<<
	  "20:30-21:15:Portugues aplicado modulo 1\n"<<
	  "21:15-22:00:Portugues aplicado modulo 1\n"<<
	  "_______________"<< 
	"\nSexta-feira\n"<<
	 "18:50-19:35:Eletricidade e eletronica\n"<<
	 "19:35-20:20:Eletricidade e eletronica\n"<<
	 "20:20-20:30:Intervalo\n"<<
	 "20:30-21:15:Sociologia do Trabalho\n"<<
	 "21:15-22:00:Sociologia do Trabalho\n"<<endl;;
	 break;}
	 switch (opcoes){
	 	
	 	case 3:cout << 
		 "E-mail dos professores:\n"<<
		 "jacyara@ifba.edu.br\n"<<
		 "josegustavo@ifba.edu.br\n"<<
		 "antoniocleber@ifba.edu.br\n"<<
		 "lucas.tibo@ifba.edu.br\n"
		 "jumenezes2@hotmail.com\n"<<endl;
		 break;
	 }
	 
		system ("pause");
		
    return 0;
    
}