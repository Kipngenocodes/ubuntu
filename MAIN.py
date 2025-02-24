import psycopg2
from psycopg2 import sql

def connect_to_postgres(dbname, user, password, host, port):
    try:
        # Connect to PostgreSQL database
        connection = psycopg2.connect(
            dbname=dbname,
            user=user,
            password=password,
            host=host,
            port=port
        )
        print("Connection to PostgreSQL DB successful")
        return connection
    except Exception as error:
        print(f"Error connecting to PostgreSQL DB: {error}")
        return None

def close_connection(connection):
    if connection:
        connection.close()
        print("PostgreSQL connection closed")

# Example usage
if __name__ == "__main__":
    conn = connect_to_postgres("your_dbname", "your_user", "your_password", "your_host", "your_port")
    # Perform database operations here
    close_connection(conn)