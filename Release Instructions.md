## ModernGadgets Release Instructions
Thanks for being willing to maintain the gadgets, SilverAzide! Herein is what you need to do if you're going to make a new release.

The most important thing: **DO NOT COMMIT ANY AUTOMATIC CHANGES MADE TO THE DYNAMIC VARIABLES FILE!!!** The file should be in the state it was in when you first cloned the repository. The only time you should commit changes to it is when you intentionally make a change.

Additionally, make sure the gadget settings remain as they were when you first installed. Undo any changes made to the settings before making a release (or just don't commit them in the first place, which is what I do.)

### GitHub Commits and such
You said you're not familiar with GitHub, so I'll give a quick rundown. I added you as a collaborator in the repository so you don't need to commit to your own fork anymore. Go ahead and clone `raiguard/ModernGadgets` to your PC and work from there.

You also mentioned that you use version control at work, so I probably don't need to explain committing and such. I use VSCode, which has a built-in Git/GitHub extension that makes things slightly easier. I use the GUI to commit changes and compare diffs.

Once you commit something, just run `git push` in the terminal (or use the GUI if you want) to push the changes to GitHub. By default, it pushes to the `master` branch, and this is where you will actually commit everything. In case you're not on the master branch, use `git checkout master` to switch to it. 

### Making a Release
If you need to make a release, first make sure the above warnings have been heeded. Delete/undo any changes made to the settings files and the DynamicVars file.

Second, navigate to `ModernGadgets\Settings\UnitTests\ReleasePrep.ini`. Load the skin and click on it. This will cause the defaults to be copied from the current settings' states. This is why you need to undo any unintentional changes to the settings first.

Third, do a global search for the current version number (i.e. 1.6.1) and replace all instances with the new version, EXCEPT for in the Changelog. Go ahead and commit that and any changes made to the defaults in the previous step.

Fourth, open the RMSKIN packager. Select the skin folder and the `ModernGadgets Welcome` layout, as well as all of the newest plugins in the repository's `Plugins` folder. This will take quite some time, unfortunately. I don't care if you mark yourself or me as the author, but if you mark it as being me, keep it as lowercase.

Go ahead and click `Next`. Go to the `Advanced` tab, and select `Wiki\mglogo.bmp` from the repository as the header image. Then copy the contents of `ModernGadgets\@Resources\Settings\_Manifest.txt` to the `Variables files` box. This is what allows the settings to be carried over between updates.

After this, you should be good to go! Create the package and test it to be sure everything works. Properly.

### Uploading a Release to GitHub
Once you have the .RMSKIN ready, and all of the appropriate commits have been pushed to GitHub, go ahead and switch to the devrelease branch with `git checkout devrelease`. Run `git merge master`, then `git push`. If you don't touch the release branch except for at this time, everything should work properly.

If you're doing a full release, do the same for the release branch. Run `git checkout release`, then `git merge master`, and finally `git push`. Then make certain you switch back to master with `git checkout master` before any other changes are made.

Now it's ready to be uploaded. Go to GitHub and click the releases button on the main repository page. Click `Draft a new release`. Put the new version in for the tag, preceded by a V (e.g. `v1.6.2` or `v1.6.2-beta.1`.). If you're doing a beta release, set the target branch to `devrelease`. If you're doing a full release, set it to `release`. Put the exact same version for the release title, then copy the contents of that version's changelog to the description box. Upload the .RMSKIN. If you're doing a beta release, click the `This is a pre-release` checkbox. **TRIPLE CHECK THE STATUS OF THIS BOX BEFORE PUBLISHING THE RELEASE!** This box is what determines whether ModernGadgets' update checker considers it a full release or a beta release.

Quadruple-check that everything is in order, then click `Publish release`. If all goes well, you should be able to see the new release in the `ModernGadgets\ReleaseStatsMeter` skin pretty much immediately.