package com.aula5.to_do_list.repository;

import org.springframework.data.jpa.repository.JpaRepository;

import com.aula5.to_do_list.entity.Tarefa;


public interface TarefaRepository extends JpaRepository<Tarefa, Long>{
    
}