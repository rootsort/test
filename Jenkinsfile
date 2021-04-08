pipeline {
    agent any 
    stages {
        stage('Build') {
            steps {
                echo 'Building the application'
            }
        }
        stage('Test') { 
            steps {
                echo 'Testing application'
                sh 'java -version'
            }
        }
        stage('Deploy') { 
            steps {
                echo 'Deploying application'
                sh 'java -version'
            }
        }
    }
}
