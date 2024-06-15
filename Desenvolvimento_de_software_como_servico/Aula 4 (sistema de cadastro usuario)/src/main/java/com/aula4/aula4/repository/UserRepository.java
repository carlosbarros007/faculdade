package com.aula4.aula4.repository;

import com.aula4.aula4.entity.User;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

@Repository
public interface UserRepository extends JpaRepository<User, Long> {
    // Aqui você pode adicionar métodos personalizados de consulta, se necessário
}
 
    

