# Minitalk

## Descripción

**Minitalk** es un proyecto que explora la comunicación entre procesos en Linux utilizando señales UNIX. Consiste en un servidor y un cliente que intercambian mensajes mediante las señales **SIGUSR1** y **SIGUSR2**. 

El objetivo principal es implementar un sistema eficiente para enviar y recibir strings entre procesos sin utilizar mecanismos de comunicación más avanzados como sockets o pipes.

---

## Funcionamiento

1. **Servidor**:
   - Se lanza primero y muestra su PID.
   - Recibe y muestra strings enviadas por los clientes.
   - Soporta múltiples clientes consecutivamente sin necesidad de reiniciarse.

2. **Cliente**:
   - Toma como argumentos:
     - El PID del servidor.
     - La string a enviar.
   - Envía la string al servidor utilizando señales UNIX.

3. **Comportamiento**:
   - La comunicación debe ser rápida y eficiente:
     - Por ejemplo, mostrar 100 caracteres en más de un segundo sería demasiado lento.
   - Solo se pueden usar las señales **SIGUSR1** y **SIGUSR2**.

### Bonus
- El servidor confirma cada señal recibida enviando una señal de respuesta al cliente.
- Soporta caracteres Unicode.


