#pragma once
using namespace std;
using namespace System;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;

ref class Bdd
{
private:
	String^ connectionString;
	MySqlConnection^ conn;

public:
	Bdd();
	DataTable^ getCliente();
	DataTable^ getIDCliente();
	DataTable^ getJuzgado();
	DataTable^ getIDJuzgado();
	DataTable^ getEmpleado();
	DataTable^ getIDEmpleado();
	DataTable^ getFactura();
	DataTable^ getIDFactura();
	DataTable^ getRegistro();
	DataTable^ getIDRegistro();
	DataTable^ getJurisdiccion();
	DataTable^ getIDJurisdiccion();
	DataTable^ getTramite();
	DataTable^ getIDTramite();
	DataTable^ getTipoTramite();
	DataTable^ getRubroTramite();
	
	void abrirConexion();
	void cerrarConexion();
	
	void insertarCliente(String^, String^, String^, String^, String^);
	void editarCliente(String^, String^, String^, String^, String^, String^);
	void eliminarCliente(String^, String^, String^, String^, String^, String^);

	void insertarEmpleado(String^, String^, String^, String^);
	void editarEmpleado(String^, String^, String^, String^, String^);
	void eliminarEmpleado(String^, String^, String^, String^, String^);

	void insertarTramite(String^ idEmpleado, String^ idCliente, String^ idJuzgado, String^ idRubro, String^ idTipo, String^ fechaIni, String^fechaFin);
	void editarTramite(String^ idEmpleado, String^ idCliente, String^ idJuzgado, String^ idRubro, String^ idTipo, String^ fechaIni, String^ fechaFin, String^);
	void eliminarTramite(String^ idEmpleado, String^ idCliente, String^ idJuzgado, String^ idRubro, String^ idTipo, String^ fechaIni, String^ fechaFin, String^);

	void insertarFactura(String^ idCliente, String^ idEmpleado, String^ idTramite, String^ fecha, String^ total);
	void editarFactura(String^ idCliente, String^ idEmpleado, String^ idTramite, String^ fecha, String^ total, String^);
	void eliminarFactura(String^ idCliente, String^ idEmpleado, String^ idTramite, String^ fecha, String^ total, String^);
	
	void insertarJurisdiccion(String^);
	void editarJurisdiccion(String^, String^);
	void eliminarJurisdiccion(String^, String^);

	void insertarRegistro(String^ idJurisdiccion, String^, String^, String^);
	void editarRegistro(String^ idJurisdiccion, String^, String^, String^, String^);
	void eliminarRegistro(String^ idJurisdiccion, String^, String^, String^, String^);
	
	void insertarJuzgado(String^ idJurisdiccion, String^, String^, String^);
	void editarJuzgado(String^ idJurisdiccion, String^, String^, String^, String^);
	void eliminarJuzgado(String^ idJurisdiccion, String^, String^, String^, String^);
};
