pipeline {
    agent any 
    environment {
        NEW_VER = '1.34'
    }
    parameters {
        booleanParam (name: 'executeTest',defaultValue: false, description: '')
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
                    //BRANCH_NAME == 'master' || BRANCH_NAME == 'dev'
                    params.executeTest == true
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
