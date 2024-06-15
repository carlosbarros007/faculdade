package com.aulateste.aula1;

import java.util.Scanner;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ConfigurableApplicationContext;

import com.aulateste.aula1.entidades.Media;
import com.aulateste.aula1.service.CalculaMedia;
import com.aulateste.aula1.service.ValidarNotas;

@SpringBootApplication
public class Aula1Application {

    public static void main(String[] args) {
        ConfigurableApplicationContext context = SpringApplication.run(Aula1Application.class, args);
		
		Scanner scanner = new Scanner(System.in);

        // Obtendo uma instância de CalculaMedia do contexto Spring
        CalculaMedia calculaMedia = context.getBean(CalculaMedia.class);
		ValidarNotas validarNotas = context.getBean(ValidarNotas.class);

        // Criando um objeto Media com notas específicas
        Media media = new Media();
		System.out.println("/////////  CALCULADORA DE MEDIA  //////////");
		System.out.print("Digite a primeira nota: ");
        media.setNota1(scanner.nextFloat());

        System.out.print("Digite a segunda nota: ");
		media.setNota2(scanner.nextFloat());

        System.out.print("Digite a terceira nota: ");
        media.setNota3(scanner.nextFloat());

		scanner.close();

		if(!validarNotas.valida(media)){
			System.out.println("notas invalidas");
		}else{

			// Calculando a média e definindo-a no objeto Media
			media.setMediaFinal(calculaMedia.calcularMedia(media));
			media.setAprovacao(validarNotas.validarSituacao(media.getMediaFinal()));
			
	
			System.out.println("a media final do aluno e:" + media.getMediaFinal() + " o aluno esta " + media.getAprovacao());
		}

		System.exit(0);
	}

}
