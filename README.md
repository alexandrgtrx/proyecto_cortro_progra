# proyecto_cortro_progra
  for (int a = 1; a > 0; a++)
    {
        if (a % 2 == 0)//TURNO JUGADOR 2
        {
            cout << "El turno de: " << jugador_2 << endl;
            cout << "Ingrese el numero de fila en la que desea eliminar" << endl;
            cin >> seleccion_fila;
            cout << "Ingrese el numero de elementos a eliminar" << endl;
            cin >> eliminacion;

            if (seleccion_fila == 1)
            {
                fila_a -= eliminacion;
                fila_1(fila_a);
                cout << endl;
                fila_2(fila_b);
                cout << endl;
                fila_3(fila_c);
                cout << endl;
            }
            if (seleccion_fila == 2)
            {
                fila_b -= eliminacion;
                fila_1(fila_a);
                cout << endl;
                fila_2(fila_b);
                cout << endl;
                fila_3(fila_c);
                cout << endl;
            }
            if (seleccion_fila == 3)
            {
                fila_c -= eliminacion;
                fila_1(fila_a);
                cout << endl;
                fila_2(fila_b);
                cout << endl;
                fila_3(fila_c);
                cout << endl;
            }
        }
        else //TURNO JUGADOR 1
        {
            cout << "Turno de: " << jugador_1 << endl;
            cout << "Ingrese el numero de fila en la que desea eliminar" << endl;
            cin >> seleccion_fila;
            cout << "Ingrese el numero de elementos a eliminar" << endl;
            cin >> eliminacion;

            if (seleccion_fila == 1)
            {
                fila_a -= eliminacion;
                fila_1(fila_a);
                cout << endl;
                fila_2(fila_b);
                cout << endl;
                fila_3(fila_c);
                cout << endl;
            }
            if (seleccion_fila == 2)
            {
                fila_b -= eliminacion;
                fila_1(fila_a);
                cout << endl;
                fila_2(fila_b);
                cout << endl;
                fila_3(fila_c);
                cout << endl;
            }
            if (seleccion_fila == 3)
            {
                fila_c -= eliminacion;
                fila_1(fila_a);
                cout << endl;
                fila_2(fila_b);
                cout << endl;
                fila_3(fila_c);
                cout << endl;
            }
        }

    }
    return 0;
}
