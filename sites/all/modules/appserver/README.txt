App Server
----------
App Server is a module that allow you to publish Apps and Releases to Apps.

App
---
The App content type is a holder for all of the Releases of an App.

App Release
-----------
App Releases are used to specify a specific downloadable version of an App and
appear directly in the App Console provided by the Apps [1] module.

Each App Release can contain a Logo and one or more Screenshots to help
users visualize the functionality that an App provides.

App Releases also contain a field for the App Manifest.  The App Manifest is
specified in the Open App Standard [2] The manifest is a .info style document
that specifies the details of the App.

App Releases can be tagged with terms in the Server Type vocabulary. Server
Type allows you to specify various versions or verticals for your App Releases.
Some common use cases for Server Type are along deployment lines such as
dev, stage, qa, integartion, prod.  It can also be along vertical lines such
as openpublic, openpublish, openatrium.

Ratings
-------
Users of an App Server via an Apps console have the ability to rate the Apps
provided.  This is done directly through the Apps console and communicated
to the App Server via an AJAX request.

Browsing
--------
Server Types and their published Releases can also be browsed with some canned
Views.  To see a listing of all Server Types defined, go to /app-servers.
Clicking on the name of a server takes you to /server-type/[term-name] and
lists all App Releases tagged with that Server Type.

TODO
----
* Build Server Type Release Browser
* Better handle the App / App Release relationship
* Have a mechanism to specify which App Release is published per server type.
* Investigate overlap/integration with Feature Server (fserver)


Maintainers
-----------
- jec006 (Josh Caldwell)
- febbraro (Frank Febbraro)


[1] http://drupal.org/apps
[2] http://groups.drupal.org/open-app-standard/oas#manifest