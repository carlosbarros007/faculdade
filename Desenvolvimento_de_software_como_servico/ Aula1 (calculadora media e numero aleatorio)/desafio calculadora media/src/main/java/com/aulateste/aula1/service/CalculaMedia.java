package com.aulateste.aula1.service;

import org.springframework.stereotype.Service;

import com.aulateste.aula1.entidades.Media;

@Service
public class CalculaMedia {

    public float calcularMedia(Media media) {
        float nota1 = media.getNota1();
        float nota2 = media.getNota2();
        float nota3 = media.getNota3();

        // Calcula a média das notas
        float mediaCalculada = Math.round( (nota1 + nota2 + nota3) / 3);

        return mediaCalculada;
    }

}
