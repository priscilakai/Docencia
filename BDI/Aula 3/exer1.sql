CREATE DATABASE BANCO;
USE BANCO;

-- Tabela Cliente
CREATE TABLE IF NOT EXISTS Cliente (
    cpf CHAR(11) NOT NULL,
    cliente VARCHAR(255) NOT NULL,
    profissao VARCHAR(255),
    localidade VARCHAR(255),
    PRIMARY KEY(cpf)
);

-- Tabela Agencia
CREATE TABLE IF NOT EXISTS Agencia (
    cod_agencia CHAR(5) NOT NULL,
    agencia VARCHAR(255) NOT NULL,
    localidade VARCHAR(255),
    PRIMARY KEY(cod_agencia)
);

-- Tabela Conta
CREATE TABLE IF NOT EXISTS Conta (
    num_conta CHAR(7) NOT NULL,
    tipo_conta VARCHAR(50),
    cpf_cliente CHAR(11) NOT NULL,
    cod_agencia CHAR(5) NOT NULL,
    saldo DECIMAL(10, 2),
    PRIMARY KEY(num_conta),
    FOREIGN KEY (cpf_cliente) REFERENCES Cliente(cpf),
    FOREIGN KEY (cod_agencia) REFERENCES Agencia(cod_agencia)
);

-- Tabela Emprestimo
CREATE TABLE IF NOT EXISTS Emprestimo (
    num_emprestimo INT,
    cpf_cliente CHAR(11) NOT NULL,
    cod_agencia CHAR(5) NOT NULL,
    valor DECIMAL(10, 2), 
    PRIMARY KEY(num_emprestimo),
    FOREIGN KEY (cpf_cliente) REFERENCES Cliente(cpf),
    FOREIGN KEY (cod_agencia) REFERENCES Agencia(cod_agencia)
);

SHOW tables;
SHOW columns from agencia;