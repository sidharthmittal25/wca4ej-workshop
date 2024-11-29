# Lab3: Upgrade Java Version

This document gives step-by-step guide to finish Lab3. You will find the steps very similar to Lab2.

## Lab3 covers:

- Upgrade from Java8 to Java21


### 1. Application analysis

Right click on the `modresorts-twas-j8` folder and select `watsonx Code Assistant` - `Upgrade Java Version`.

![screenshot](../images/VSC_upgrade_java.png)

A `Upgrade` tab will show up. In the `Target` dropdown, select`Java 21 (LTS)`, and then click `Build and analyze`.

![screenshot](../images/VSC_upgrade_java_build_analysis.png)

After analysis, the report will show you issues with this application to be fixed. 3 of them can be automated, 2 of them needs assistance. For the automated fixes, we click `Run automated fixes` (this process might take long).

![screenshot](../images/VSC_upgrade_java_analysis_result.png)

### 2. Apply Fixes

For the assisted fixes, you can click the `Instructions` dropdown to see the step which we will guide you. Now we expand the dropdowns of the first issue as shown. There are clear instructions on how to fix this issue at the bottom.

![screenshot](../images/VSC_upgrade_java_assisted_fix.png)

Now we click the name of the file that has issue and needs to be fixed. In the editor window, we select the entire class defined in here that that calls the `MBeanOperationInfo` constructor by highlighting. Then we click `Help me` to ask help from LLM.

![screenshot](../images/VSC_upgrade_java_help_me.png)

The chat with model window will show up and ask model for help. The model gives suggestions for fixing the issue.

![screenshot](../images/VSC_upgrade_java_chat_suggestions.png)

Here we change the code in the `DMbeanUtils.java` file using the copy code from chat.

We can ignore the second issue for now as it is a deprecation warning. Or if the rebuild still have error, you can go through the same process and fix the warning as well.


### 3. Rebuild Application

Now that we have all the fixes applied, we can `Rebuild and refresh` to see that there are no more critical issues with the application.

![screenshot](../images/VSC_upgrade_java_rebuild.png)

We can go to browser to view the new application. This time you will find that the location module is fixed.

![screenshot](../images/VSC_upgrade_java_location_fixed.png)