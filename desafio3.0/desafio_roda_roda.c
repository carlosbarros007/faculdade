#include <stdio.h>

char (*bancoDados(char parametro[50]))[50]{
   
   /*banco de dados*/
    static char programacao[20][50] = {
        "Variavel",
        "Laço",
        "Funcao",
        "Classe",
        "Objeto",
        "Método",
        "Compilador",
        "Depurador",
        "Interface",
        "Biblioteca",
        "Algoritmo",
        "Condicionais",
        "Iteração",
        "Herança",
        "Polimorfismo",
        "Abstração",
        "Encapsulamento",
        "Pilha",
        "Fila",
        "Vetor"
    };

    static char tecnologia[20][50] = {

        "Internet",
        "Smartphone",
        "Computador",
        "Nuvem",
        "Inteligência Artificial",
        "Realidade Virtual",
        "Big Data",
        "Segurança",
        "Criptografia",
        "Redes Sociais",
        "Streaming",
        "Aplicativo",
        "Conectividade",
        "Cibersegurança",
        "Impressora 3D",
        "Internet das Coisas",
        "Robótica",
        "Blockchain",
        "Machine Learning",
        "Realidade Aumentada"

    };

    static char software[20][50]={

        "Engenharia de software",
        "Desenvolvimento ágil",
        "Ciclo de vida",
        "Requisitos",
        "Análise",
        "Projeto",
        "Codificação",
        "Testes",
        "Depuração",
        "Integração contínua",
        "Entrega contínua",
        "Manutenção",
        "Refatoração",
        "Padrões de projeto",
        "Arquitetura de software",
        "Gerenciamento de configuração",
        "Controle de versão",
        "Documentação",
        "Qualidade de software",
        "Métricas de software"

    };

    static char linguagem[20][50] = {

        "Python",
        "Java", 
        "C mais mais", 
        "JavaScript", 
        "Ruby", 
        "C sharp", 
        "PHP", 
        "Swift", 
        "Go", 
        "Rust", 
        "Kotlin", 
        "TypeScript", 
        "Scala", 
        "Lua", 
        "Perl", 
        "Haskell", 
        "Julia", 
        "Objective-C", 
        "Shell", 
        "VB.NET"
    };

    static char frameworks[20][50] = {

        "React", 
        "Angular", 
        "Vue.js", 
        "Django", 
        "Ruby on Rails", 
        "Laravel", 
        "Spring", 
        "Express.js", 
        "Flask", 
        "ASP.NET", 
        "Symfony", 
        "Bootstrap", 
        "Node.js", 
        "Flutter", 
        "Ionic", 
        "Ember.js", 
        "ASP.NET Core", 
        "CakePHP", 
        "CodeIgniter", 
        "Play Framework"

    };

    static char ides[20][50] = {

        "Visual Studio Code", 
        "IntelliJ IDEA", 
        "PyCharm", 
        "Eclipse", 
        "Xcode", 
        "Android Studio", 
        "NetBeans", "Atom", 
        "Sublime Text", 
        "Vim", 
        "Emacs", 
        "WebStorm", 
        "PhpStorm", 
        "RubyMine", 
        "CLion", 
        "Code Block", 
        "Notepad mais mais", 
        "Brackets", 
        "Komodo IDE", 
        "Qt Creator"
    };

    static char areasTecnologia[20][50] = {

        "Inteligência Artificial", 
        "Ciência de Dados", 
        "Segurança da Informação", 
        "Desenvolvimento Web", 
        "Redes de Computadores", 
        "Engenharia de Software", 
        "Internet das Coisas", 
        "Cloud Computing", 
        "Realidade Virtual", 
        "Bioinformática", 
        "Robótica", 
        "Gestão de Projetos de Tecnologia", 
        "Cibersegurança", "Sistemas Embarcados", 
        "Computação Gráfica", 
        "Análise de Dados", 
        "Machine Learning", 
        "Blockchain", 
        "Arquitetura de Software", 
        "Teste de Software"

    };

    if(parametro == "programacao"){

        return programacao;

    }else if (parametro == "tecnologia"){

        return tecnologia;
        
    }else if (parametro == "software"){

        return software;

    }else if (parametro == "linguagem"){

        return linguagem;
    
    }else if (parametro == "frameworks"){
        
        return frameworks;

    }else if (parametro == "ides"){
        
        return ides;
    
    }else if (parametro == "areasTecnologia"){

        return areasTecnologia;

    }

    return 0;

}



int main(void) {
    char (*dadosProgramacao)[50] = bancoDados("areasTecnologia");

    for (size_t i = 0; i < 50; i++) {
        printf("%s\n", dadosProgramacao[i]);
    }
    
    return 0;
}

