import threading

class SyncValueMonitor:
    def __init__(self):
        self.current_value = -1
        self.waiting_queue = threading.Condition()
        self.num_processes_unblocked = 0  # Aggiunto attributo per memorizzare il numero di processi sbloccati

    def syncvalue(self, key):
        with self.waiting_queue:
            if key == self.current_value:
                # Il valore è lo stesso, il processo si blocca
                self.waiting_queue.wait()
            else:
                # Il valore è diverso, sblocca tutti i processi in attesa
                self.num_processes_unblocked = 0  # Inizializza il contatore
                self.current_value = key
                self.waiting_queue.notify_all()
                # Restituisce il numero di processi sbloccati
                return self.num_processes_unblocked

# Esempio di utilizzo
def example_usage(monitor, key, thread_name):
    print(f"{thread_name} chiama syncvalue({key})")
    num_processes_unblocked = monitor.syncvalue(key)
    print(f"{thread_name} è stato sbloccato. Numero di processi sbloccati: {num_processes_unblocked}")

# Creazione del monitor
sv_monitor = SyncValueMonitor()

# Creazione di alcuni thread di esempio
thread_P = threading.Thread(target=example_usage, args=(sv_monitor, 42, "P"))
thread_Q = threading.Thread(target=example_usage, args=(sv_monitor, 42, "Q"))
thread_R = threading.Thread(target=example_usage, args=(sv_monitor, 44, "R"))
thread_T = threading.Thread(target=example_usage, args=(sv_monitor, 46, "T"))
thread_V = threading.Thread(target=example_usage, args=(sv_monitor, 0, "V"))

# Avvio dei thread
thread_P.start()
thread_Q.start()
thread_R.start()
thread_T.start()
thread_V.start()

# Attendi che tutti i thread finiscano
thread_P.join()
thread_Q.join()
thread_R.join()
thread_T.join()
thread_V.join()