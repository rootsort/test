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
11
            steps {
12
                echo 'Deploying application'
13
                sh 'java -version'
14
            }
15
        }
    }
}
