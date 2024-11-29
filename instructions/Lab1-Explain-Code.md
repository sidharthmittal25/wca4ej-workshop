# Lab1: Code Explanation 

This document gives step-by-step guide to finish Lab1.

## Lab1 covers:

- Download recommended code assets.
- Explore the example `modresrots` application
- Explain `modresrots` application.


### 1. Code Asset Download

Download and unzip the `modresorts-twas-j8.zip` file, or clone from this [public GitHub repository](https://github.com/Theo-Reignier/wca-faststart):

```bash
git clone https://github.com/Theo-Reignier/wca-faststart.git
```

Open the `modresorts-twas-j8` folder in VScode. In order to leverage all WCA features, it's important that you open VScode at the Java application folder level (i.e. `modresorts-twas-j8/`).

![](../images/VSC_folder_explorer.png)

> **Note:** If you used the `.zip` file, we recommend to *'Initialize Repository'* to enable source control features and keep track of your changes. Commit all the new changes but you don't need to publish the branch. 

![](../images/VSC_initialize_repository.png)


### 2. Build Application Project

- Open a terminal, and go to your project folder, and navigate to `was_dependency` folder.

    ```bash
    cd <your-path>/modresorts-twas-j8/was_dependency
    ```
- Once inside the folder, run the following command to build project:

    ```bash
    mvn install:install-file -Dfile=was_public.jar -DpomFile=was_public-9.0.0.pom
    ```

![screenshot](../images/VSC_was_build.png)

For Windows users, you might need to give full path for the build files `was_public.jar` and `was_public-9.0.0.pom`.

![screenshot](../images/VSC-windows-build-app-full-path.png)


### 3. View Liberty App

After you installed LibertyTools from VSCode marketplace, there should be a Liberty Dashboard section in your explorer. Click `Add project to Liberty Dashboard` and put the path to the `modresort-twas-j8` folder (this would be automatic if you open in this project).

![screenshot](../images/VSC_LibertyTools_dashboard_1.png)

Once you selected the right project, a `modresrots` app will show up. Right click on the app to start.

![screenshot](../images/VSC_LibertyTools_dashboard_2.png)

VSCode will go through downloading required packages, which you can see in terminal. 

![screenshot](../images/VSC_Liberty_App_start.png)

Once the app started, you can get the url (in my case `http://localhost:9080/resorts/`) and open in your browser to checkout the web app.

**[IMPORTANT]** Because we are running this application using Liberty in Java21, while this application is built for WebSphere in Java8, even though the application started successfully, **there are 2 places that have error because of this migration + upgrade**.

![screenshot](../images/VSC_modresorts_app.png)

The first one, if you click the `Where to?` dropdown and select any location, you will find the location information module showing errors.

![screenshot](../images/VSC_modresorts_app_location_error.png)

The Second one, the `Logout` buttom does not work if you click on it.

![screenshot](../images/VSC_modresorts_app_logout_error.png)

We will **fix these errors** in the later labs.


### 4. Explain Project Code

To understand the whole project, right click on the `modresorts-twas-j8` folder and select `watsonx Code Assistant` - `Explain Application`.

![screenshot](../images/VSC_explain_code.png)

VSCode will prompt you that the process takes extra time. Click `Proceed with code analysis`.

![screenshot](../images/VSC_explain_code_proceed.png)

The analysis might take 1-2 minutes to finish and a prompt will show up in the bottom right cornor.

![screenshot](../images/VSC_explain_code_finish.png)

Now we can open the report and read through the details.

![screenshot](../images/VSC_explain_code_report.png)