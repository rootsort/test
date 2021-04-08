def gv
pipeline {
    agent any 
    environment {
        NEW_VER = '1.34'
    }
    parameters {
        booleanParam (name: 'executeTest',defaultValue: false, description: '')
    }
    stages {
        stage('Init') {
            steps {
                script {
                    gv = load "script.groovy"
                }
            }
        }
        stage('Build') {
            steps {
                script {
                gv.buildApp()
                }
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
                script {
                gv.TestApp()
                }
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
