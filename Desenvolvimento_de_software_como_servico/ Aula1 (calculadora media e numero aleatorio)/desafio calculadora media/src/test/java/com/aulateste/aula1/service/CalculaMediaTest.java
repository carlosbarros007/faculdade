package com.aulateste.aula1.service;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.jupiter.api.Test;

import com.aulateste.aula1.entidades.Media;

public class CalculaMediaTest {
    @Test
    void testCalcularMedia() {

        CalculaMedia calculaMedia = new CalculaMedia();

        Media media = new Media(7.5f, 8.0f, 9.5f);

        float resultado = calculaMedia.calcularMedia(media);

        assertEquals(8, resultado, 0.0f); // Espera-se que a média seja 8.0
    }
}
