# Labo de préparation pour le TP1

## Étapes préliminaires
Ce laboratoire est une préparation au travail pratique 1 du cours. Elle constitue une démarche d'investigation d'un programme. Vous allez devoir corriger les erreurs présentes dans le code qui vous est fourni.

***Très important de suivre toutes les étapes présentées ci-dessous dans l'ordre***

Suivre les étapes suivantes afin de débuter le laboratoire:

1. Directement dans la machine virtuelle, ouvrir un terminal.

2. Dans le terminal, effectuer les deux commandes suivantes:

   ***Mettre le courriel et le nom d'utilisateur correspondant à votre compte GitHub.***

    - `git config --global user.email "email"`
    - `git config --global user.name "username"`

3. Générer une clé SSH en suivant les deux tutoriels suivants:

   1. https://docs.github.com/fr/authentication/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent?platform=linux
   2. https://docs.github.com/fr/authentication/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account

4. Cloner le dépot dans la machine virtuelle avec la commande:
   - `git clone <url>` Assurez-vous de choisir l'URL SSH comme ceci:
     
     ![{0F96AB22-C7BE-4544-B688-ADAD018D54E6}](https://github.com/user-attachments/assets/1b30a817-ce1a-4d6a-b288-160debdc175b)


     ![{4EACA8F3-C5C1-43FC-B1CC-DDF7467391CC}](https://github.com/user-attachments/assets/0f1c0df3-30f5-4c68-b35e-6188bc4a95dc)

5. Ouvrir le projet dans NetBeans avec File>Open Project...:
   ![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/336b62d0-7696-415e-a49c-4f8515a64bf2)


Vous êtes maintenant prêt à débuter le laboratoire.


## Démarche d'investigation avec issues
But: Investiguer afin de corriger un programme. Vous devez alors décrire et illustrer toute la démarche que vous aurez adoptée pour atteindre cet objectif, ceci en utilisant les "issues" de GitHub. Il s’agit d’être complet, mais concis. Attention, il s'agit ici de valider une démarche d'investigation. Les justifications par la preuve des outils utilisés pour localiser puis corriger les erreurs sont plus importantes que les corrections du code en tant que tel. Vous devez documenter les bugs à l'aide d'"issues" pour ensuite en faire la correction.

Suivre les étapes suivantes:
1. Examiner le programme et écrire dans le fichier PROGRAMME.md quel est, à la lueur d’une première observation du code, le problème qu’est censé résoudre le programme.
2. Lancer la compilation du programme principal.
3. Documenter dans des issues tous les problèmes. On peut retrouver tous les types d'erreurs (erreur de syntaxe, mise en garde à corriger, mauvaise pratique, erreur d’édition de lien, erreur de logique (erreur à l’exécution) )
Les issues doivent être bien documentées pour chaque erreur identifiée, afin de justifier par des preuves comment vous l’avez localisée (copies d’écran, commentaires d’explication des messages d’erreur, etc.). Voir les exemples d'issues documentées fournies. On demande une issue par bug trouvé.
Dans la section "Issues", cliquer sur "New issue":

![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/1c496d89-4fc5-498d-98e6-01dc33817b4a)

Ajouter un titre et une description. Vous devez suivre la structure **Localisation-Problème-Solution** comme démontré dans les capsules. Cliquer sur "Submit new issue".

![image](https://github.com/GIF-1003/Laboratoire-Preparation-TP1/assets/57879032/6106e60e-78be-47de-a7e6-1e6080c8fb26)

4. Corriger chacun des bugs trouvés et effectuer un commit et un push de la solution. Il est recommandé de faire des commits et pushs régulièrement afin de sauvegarder son travail.

5. À la toute fin, ne pas oublier de faire un dernier commit et push du code final corrigé.

6. Finalement, ajouter 2 captures d'écrans dans la Pull Request "Feedback" qui montre le résultat de la compilation et de l'exécution du programme une fois les bugs corrigés.
   ![{CC5D2B8C-1EC5-4AC1-84CF-01740B574316}](https://github.com/user-attachments/assets/8c85448c-d7ce-4520-b5cd-e08d7f21d7a4)

   Appuyer sur Comment.

