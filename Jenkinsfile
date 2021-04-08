pipeline {
    agent any 
    environment {
        NEW_VER = '1.34'
    }
    parameters {
        boolenParam (name: 'executeTest',defaultValue: true, description: '')
    }
    stages {
        stage('Build') {
            steps {
                echo 'Building the application'
                echo "Building version ${NEW_VER}"
            }
        }
        stage('Test') {
            when {
                expression {
                    BRANCH_NAME == 'master' || BRANCH_NAME == 'dev'
                }
            }
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
