CREATE DATABASE empresa;
USE empresa;

CREATE TABLE IF NOT EXISTS Departamento(
	Dnome VARCHAR(255) NOT NULL,
	Dnumero INT,
	PRIMARY KEY(Dnumero)
);

CREATE TABLE IF NOT EXISTS Funcionario(
	Pnome VARCHAR(20) NOT NULL,
	Minicial CHAR(1),
	Unome VARCHAR(20) NOT NULL,
	Cpf CHAR(11),
	Datanasc date NOT NULL,
	Endereco VARCHAR(255) NOT NULL,
	Sexo enum('M','F') NOT NULL,
	Salario numeric(8,2) NOT NULL,
	Cpf_supervisor CHAR(11),
	Dnr INT,
	PRIMARY KEY(Cpf),
	FOREIGN KEY(Dnr) references Departamento(Dnumero),
	FOREIGN KEY(Cpf_supervisor) REFERENCES Funcionario(Cpf)
);

CREATE TABLE IF NOT EXISTS Projeto(
	Projnome varchar(20) NOT NULL,
	Projnumero INT,
	Projlocal varchar(20) NOT NULL,
	Dnum INT,
	PRIMARY KEY(Projnumero),
	FOREIGN KEY(Dnum) REFERENCES Departamento(Dnumero)
);

SHOW tables;