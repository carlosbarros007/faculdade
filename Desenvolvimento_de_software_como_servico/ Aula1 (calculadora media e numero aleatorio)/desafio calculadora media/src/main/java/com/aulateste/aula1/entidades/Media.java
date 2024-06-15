package com.aulateste.aula1.entidades;

import org.springframework.stereotype.Component;

@Component
public class Media {

    private float nota1;
    private float nota2;
    private float nota3;
    private float mediaFinal;
    private String aprovacao;

    public String getAprovacao() {
        return aprovacao;
    }

    public void setAprovacao(String aprovacao) {
        this.aprovacao = aprovacao;
    }

    public float getMediaFinal() {
        return mediaFinal;
    }

    public void setMediaFinal(float mediaFinal) {
        this.mediaFinal = mediaFinal;
    }

    public Media(){}

    public Media( float nota1, float nota2, float nota3){

        this.nota1 = nota1;
        this.nota2 = nota2;
        this.nota3 = nota3;
        
    }

    public float getNota1() {
        return nota1;
    }
    public void setNota1(float nota1) {
        this.nota1 = nota1;
    }
    public float getNota2() {
        return nota2;
    }
    public void setNota2(float nota2) {
        this.nota2 = nota2;
    }
    public float getNota3() {
        return nota3;
    }
    public void setNota3(float nota3) {
        this.nota3 = nota3;
    }


}
