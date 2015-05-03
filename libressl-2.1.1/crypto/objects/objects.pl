


<!DOCTYPE html>
<html lang="en" class="">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta http-equiv="Content-Language" content="en">
    
    
    <title>openbsd/objects.pl at master · libressl-portable/openbsd · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png">
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png">
    <meta property="fb:app_id" content="1401488693436528">

      <meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="libressl-portable/openbsd" name="twitter:title" /><meta content="openbsd - Source code pulled from OpenBSD for LibreSSL - this includes most of the library and supporting code. The place to contribute to this code is via the OpenBSD CVS tree." name="twitter:description" /><meta content="https://avatars0.githubusercontent.com/u/8124028?v=3&amp;s=400" name="twitter:image:src" />
      <meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="https://avatars0.githubusercontent.com/u/8124028?v=3&amp;s=400" property="og:image" /><meta content="libressl-portable/openbsd" property="og:title" /><meta content="https://github.com/libressl-portable/openbsd" property="og:url" /><meta content="openbsd - Source code pulled from OpenBSD for LibreSSL - this includes most of the library and supporting code. The place to contribute to this code is via the OpenBSD CVS tree." property="og:description" />
      <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">
    <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">
    <link rel="assets" href="https://assets-cdn.github.com/">
    
    <meta name="pjax-timeout" content="1000">
    

    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">
    <meta name="selected-link" value="repo_source" data-pjax-transient>
      <meta name="google-analytics" content="UA-3769691-2">

    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="25A2A4B3:73EF:C289088:554653D4" name="octolytics-dimension-request_id" />
    
    <meta content="Rails, view, blob#show" name="analytics-event" />
    <meta class="js-ga-set" name="dimension1" content="Logged Out">
    <meta class="js-ga-set" name="dimension2" content="Header v3">
    <meta name="is-dotcom" content="true">
    <meta name="hostname" content="github.com">
    <meta name="user-login" content="">

    
    <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">


    <meta content="authenticity_token" name="csrf-param" />
<meta content="Z+ZBh+UoSaEWt4w2CcOUagA/QoAMdXlVFEXEVCPZXZCT+w3ZqtI4VhCpThgSQRqgRjJWCh5xCFbsIVYRlFwgKg==" name="csrf-token" />

    <link href="https://assets-cdn.github.com/assets/github-b0b471dd90b1b98fa4ad82a741cb063dc35b5aadd578ae0669a1f59e78bb2d75.css" media="all" rel="stylesheet" />
    <link href="https://assets-cdn.github.com/assets/github2-de5dc7a40d6c453d7f222194158d4416e27c8c628943d75540528101868794d2.css" media="all" rel="stylesheet" />
    
    


    <meta http-equiv="x-pjax-version" content="faeabbcdf5db23d33dee769ccc99d144">

      
  <meta name="description" content="openbsd - Source code pulled from OpenBSD for LibreSSL - this includes most of the library and supporting code. The place to contribute to this code is via the OpenBSD CVS tree.">
  <meta name="go-import" content="github.com/libressl-portable/openbsd git https://github.com/libressl-portable/openbsd.git">

  <meta content="8124028" name="octolytics-dimension-user_id" /><meta content="libressl-portable" name="octolytics-dimension-user_login" /><meta content="21735025" name="octolytics-dimension-repository_id" /><meta content="libressl-portable/openbsd" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="21735025" name="octolytics-dimension-repository_network_root_id" /><meta content="libressl-portable/openbsd" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/libressl-portable/openbsd/commits/master.atom" rel="alternate" title="Recent Commits to openbsd:master" type="application/atom+xml">

  </head>


  <body class="logged_out  env-production windows vis-public page-blob">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>
    <div class="wrapper">
      
      
      


        
        <div class="header header-logged-out" role="banner">
  <div class="container clearfix">

    <a class="header-logo-wordmark" href="https://github.com/" data-ga-click="(Logged out) Header, go to homepage, icon:logo-wordmark">
      <span class="mega-octicon octicon-logo-github"></span>
    </a>

    <div class="header-actions" role="navigation">
        <a class="btn btn-primary" href="/join" data-ga-click="(Logged out) Header, clicked Sign up, text:sign-up">Sign up</a>
      <a class="btn" href="/login?return_to=%2Flibressl-portable%2Fopenbsd%2Fblob%2Fmaster%2Fsrc%2Flib%2Flibssl%2Fsrc%2Fcrypto%2Fobjects%2Fobjects.pl" data-ga-click="(Logged out) Header, clicked Sign in, text:sign-in">Sign in</a>
    </div>

    <div class="site-search repo-scope js-site-search" role="search">
      <form accept-charset="UTF-8" action="/libressl-portable/openbsd/search" class="js-site-search-form" data-global-search-url="/search" data-repo-search-url="/libressl-portable/openbsd/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
  <input type="text"
    class="js-site-search-field is-clearable"
    data-hotkey="s"
    name="q"
    placeholder="Search"
    data-global-scope-placeholder="Search GitHub"
    data-repo-scope-placeholder="Search"
    tabindex="1"
    autocapitalize="off">
  <div class="scope-badge">This repository</div>
</form>
    </div>

      <ul class="header-nav left" role="navigation">
          <li class="header-nav-item">
            <a class="header-nav-link" href="/explore" data-ga-click="(Logged out) Header, go to explore, text:explore">Explore</a>
          </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="/features" data-ga-click="(Logged out) Header, go to features, text:features">Features</a>
          </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="https://enterprise.github.com/" data-ga-click="(Logged out) Header, go to enterprise, text:enterprise">Enterprise</a>
          </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="/blog" data-ga-click="(Logged out) Header, go to blog, text:blog">Blog</a>
          </li>
      </ul>

  </div>
</div>



      <div id="start-of-content" class="accessibility-aid"></div>
          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    <div id="js-flash-container">
      
    </div>
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        
<ul class="pagehead-actions">

  <li>
      <a href="/login?return_to=%2Flibressl-portable%2Fopenbsd"
    class="btn btn-sm btn-with-count tooltipped tooltipped-n"
    aria-label="You must be signed in to watch a repository" rel="nofollow">
    <span class="octicon octicon-eye"></span>
    Watch
  </a>
  <a class="social-count" href="/libressl-portable/openbsd/watchers">
    31
  </a>

  </li>

  <li>
      <a href="/login?return_to=%2Flibressl-portable%2Fopenbsd"
    class="btn btn-sm btn-with-count tooltipped tooltipped-n"
    aria-label="You must be signed in to star a repository" rel="nofollow">
    <span class="octicon octicon-star"></span>
    Star
  </a>

    <a class="social-count js-social-count" href="/libressl-portable/openbsd/stargazers">
      92
    </a>

  </li>

    <li>
      <a href="/login?return_to=%2Flibressl-portable%2Fopenbsd"
        class="btn btn-sm btn-with-count tooltipped tooltipped-n"
        aria-label="You must be signed in to fork a repository" rel="nofollow">
        <span class="octicon octicon-repo-forked"></span>
        Fork
      </a>
      <a href="/libressl-portable/openbsd/network" class="social-count">
        25
      </a>
    </li>
</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="mega-octicon octicon-repo"></span>
          <span class="author"><a href="/libressl-portable" class="url fn" itemprop="url" rel="author"><span itemprop="title">libressl-portable</span></a></span><!--
       --><span class="path-divider">/</span><!--
       --><strong><a href="/libressl-portable/openbsd" class="js-current-repository" data-pjax="#js-repo-pjax-container">openbsd</a></strong>

          <span class="page-context-loader">
            <img alt="" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
          </span>

        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">
      <div class="repository-with-sidebar repo-container new-discussion-timeline  ">

        <div class="repository-sidebar clearfix">
            
<nav class="sunken-menu repo-nav js-repo-nav js-sidenav-container-pjax js-octicon-loaders"
     role="navigation"
     data-pjax="#js-repo-pjax-container"
     data-issue-count-url="/libressl-portable/openbsd/issues/counts">
  <ul class="sunken-menu-group">
    <li class="tooltipped tooltipped-w" aria-label="Code">
      <a href="/libressl-portable/openbsd" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /libressl-portable/openbsd">
        <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>    </li>

      <li class="tooltipped tooltipped-w" aria-label="Issues">
        <a href="/libressl-portable/openbsd/issues" aria-label="Issues" class="js-selected-navigation-item sunken-menu-item" data-hotkey="g i" data-selected-links="repo_issues repo_labels repo_milestones /libressl-portable/openbsd/issues">
          <span class="octicon octicon-issue-opened"></span> <span class="full-word">Issues</span>
          <span class="js-issue-replace-counter"></span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>      </li>

    <li class="tooltipped tooltipped-w" aria-label="Pull requests">
      <a href="/libressl-portable/openbsd/pulls" aria-label="Pull requests" class="js-selected-navigation-item sunken-menu-item" data-hotkey="g p" data-selected-links="repo_pulls /libressl-portable/openbsd/pulls">
          <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull requests</span>
          <span class="js-pull-replace-counter"></span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>    </li>

  </ul>
  <div class="sunken-menu-separator"></div>
  <ul class="sunken-menu-group">

    <li class="tooltipped tooltipped-w" aria-label="Pulse">
      <a href="/libressl-portable/openbsd/pulse" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-selected-links="pulse /libressl-portable/openbsd/pulse">
        <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>    </li>

    <li class="tooltipped tooltipped-w" aria-label="Graphs">
      <a href="/libressl-portable/openbsd/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-selected-links="repo_graphs repo_contributors /libressl-portable/openbsd/graphs">
        <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>    </li>
  </ul>


</nav>

              <div class="only-with-full-nav">
                  
<div class="clone-url open"
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=clone">
  <h3><span class="text-emphasized">HTTPS</span> clone URL</h3>
  <div class="input-group js-zeroclipboard-container">
    <input type="text" class="input-mini input-monospace js-url-field js-zeroclipboard-target"
           value="https://github.com/libressl-portable/openbsd.git" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button tooltipped tooltipped-s" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  
<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=clone">
  <h3><span class="text-emphasized">Subversion</span> checkout URL</h3>
  <div class="input-group js-zeroclipboard-container">
    <input type="text" class="input-mini input-monospace js-url-field js-zeroclipboard-target"
           value="https://github.com/libressl-portable/openbsd" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button tooltipped tooltipped-s" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>



<p class="clone-options">You can clone with
  <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a> or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <a href="https://help.github.com/articles/which-remote-url-should-i-use" class="help tooltipped tooltipped-n" aria-label="Get help on which URL is right for you.">
    <span class="octicon octicon-question"></span>
  </a>
</p>


  <a href="https://windows.github.com" class="btn btn-sm sidebar-button" title="Save libressl-portable/openbsd to your computer and use it in GitHub Desktop." aria-label="Save libressl-portable/openbsd to your computer and use it in GitHub Desktop.">
    <span class="octicon octicon-device-desktop"></span>
    Clone in Desktop
  </a>


                <a href="/libressl-portable/openbsd/archive/master.zip"
                   class="btn btn-sm sidebar-button"
                   aria-label="Download the contents of libressl-portable/openbsd as a zip file"
                   title="Download the contents of libressl-portable/openbsd as a zip file"
                   rel="nofollow">
                  <span class="octicon octicon-cloud-download"></span>
                  Download ZIP
                </a>
              </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          

<a href="/libressl-portable/openbsd/blob/b5a4d2123f5a0212fea18c18f44c2c9cb4130805/src/lib/libssl/src/crypto/objects/objects.pl" class="hidden js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:288377081d386d0d9414260e7216100f -->

<div class="file-navigation js-zeroclipboard-container">
  
<div class="select-menu js-menu-container js-select-menu left">
  <span class="btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w"
    data-master-branch="master"
    data-ref="master"
    title="master"
    role="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <span class="octicon octicon-git-branch"></span>
    <i>branch:</i>
    <span class="js-select-button css-truncate-target">master</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-x js-menu-close" role="button" aria-label="Close"></span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" data-filter-placeholder="Filter branches/tags" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_2_0/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_2_0"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_2_0">
                OPENBSD_2_0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_2_1/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_2_1"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_2_1">
                OPENBSD_2_1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_2_2/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_2_2"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_2_2">
                OPENBSD_2_2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_2_3/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_2_3"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_2_3">
                OPENBSD_2_3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_2_4/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_2_4"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_2_4">
                OPENBSD_2_4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_2_5/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_2_5"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_2_5">
                OPENBSD_2_5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_2_6/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_2_6"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_2_6">
                OPENBSD_2_6
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_2_7/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_2_7"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_2_7">
                OPENBSD_2_7
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_2_8/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_2_8"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_2_8">
                OPENBSD_2_8
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_2_9/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_2_9"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_2_9">
                OPENBSD_2_9
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_3_0/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_3_0"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_3_0">
                OPENBSD_3_0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_3_1/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_3_1"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_3_1">
                OPENBSD_3_1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_3_2/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_3_2"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_3_2">
                OPENBSD_3_2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_3_3/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_3_3"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_3_3">
                OPENBSD_3_3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_3_4/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_3_4"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_3_4">
                OPENBSD_3_4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_3_5/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_3_5"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_3_5">
                OPENBSD_3_5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_3_6/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_3_6"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_3_6">
                OPENBSD_3_6
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_3_7/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_3_7"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_3_7">
                OPENBSD_3_7
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_3_8/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_3_8"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_3_8">
                OPENBSD_3_8
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_3_9/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_3_9"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_3_9">
                OPENBSD_3_9
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_4_0/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_4_0"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_4_0">
                OPENBSD_4_0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_4_1/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_4_1"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_4_1">
                OPENBSD_4_1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_4_2/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_4_2"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_4_2">
                OPENBSD_4_2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_4_3/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_4_3"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_4_3">
                OPENBSD_4_3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_4_4/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_4_4"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_4_4">
                OPENBSD_4_4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_4_5/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_4_5"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_4_5">
                OPENBSD_4_5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_4_6/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_4_6"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_4_6">
                OPENBSD_4_6
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_4_7/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_4_7"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_4_7">
                OPENBSD_4_7
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_4_8/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_4_8"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_4_8">
                OPENBSD_4_8
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_4_9/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_4_9"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_4_9">
                OPENBSD_4_9
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_5_0/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_5_0"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_5_0">
                OPENBSD_5_0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_5_1/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_5_1"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_5_1">
                OPENBSD_5_1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_5_2/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_5_2"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_5_2">
                OPENBSD_5_2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_5_3/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_5_3"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_5_3">
                OPENBSD_5_3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_5_4/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_5_4"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_5_4">
                OPENBSD_5_4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_5_5/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_5_5"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_5_5">
                OPENBSD_5_5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_5_6/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_5_6"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_5_6">
                OPENBSD_5_6
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/libressl-portable/openbsd/blob/OPENBSD_5_7/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="OPENBSD_5_7"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="OPENBSD_5_7">
                OPENBSD_5_7
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open selected"
               href="/libressl-portable/openbsd/blob/master/src/lib/libssl/src/crypto/objects/objects.pl"
               data-name="master"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="master">
                master
              </span>
            </a>
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/pre_openssl_0_9_8h/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="pre_openssl_0_9_8h"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="pre_openssl_0_9_8h">pre_openssl_0_9_8h</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/openssl_1_0_1g/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="openssl_1_0_1g"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="openssl_1_0_1g">openssl_1_0_1g</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/openssl_1_0_1_g/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="openssl_1_0_1_g"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="openssl_1_0_1_g">openssl_1_0_1_g</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/openssl_1_0_1_c/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="openssl_1_0_1_c"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="openssl_1_0_1_c">openssl_1_0_1_c</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/openssl_1_0_0_f/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="openssl_1_0_0_f"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="openssl_1_0_0_f">openssl_1_0_0_f</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/openssl_1_0_0_e/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="openssl_1_0_0_e"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="openssl_1_0_0_e">openssl_1_0_0_e</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/openssl_0_9_8_k/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="openssl_0_9_8_k"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="openssl_0_9_8_k">openssl_0_9_8_k</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/openssl_0_9_8_j/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="openssl_0_9_8_j"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="openssl_0_9_8_j">openssl_0_9_8_j</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/openssl_0_9_8_h/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="openssl_0_9_8_h"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="openssl_0_9_8_h">openssl_0_9_8_h</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/openssl_0_9_7j/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="openssl_0_9_7j"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="openssl_0_9_7j">openssl_0_9_7j</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/openssh_1_0_0_a/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="openssh_1_0_0_a"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="openssh_1_0_0_a">openssh_1_0_0_a</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/eric_g2k12/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="eric_g2k12"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="eric_g2k12">eric_g2k12</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/butholakala/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="butholakala"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="butholakala">butholakala</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/SSLeay_0_9_0b/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="SSLeay_0_9_0b"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="SSLeay_0_9_0b">SSLeay_0_9_0b</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENSSL_0_9_7_STABLE_SNAP_20020911/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENSSL_0_9_7_STABLE_SNAP_20020911"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENSSL_0_9_7_STABLE_SNAP_20020911">OPENSSL_0_9_7_STABLE_SNAP_20020911</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENSSL_0_9_7G/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENSSL_0_9_7G"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENSSL_0_9_7G">OPENSSL_0_9_7G</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENSSL_0_9_7D/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENSSL_0_9_7D"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENSSL_0_9_7D">OPENSSL_0_9_7D</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENSSL_0_9_7C/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENSSL_0_9_7C"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENSSL_0_9_7C">OPENSSL_0_9_7C</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENSSL_0_9_7_BETA3/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENSSL_0_9_7_BETA3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENSSL_0_9_7_BETA3">OPENSSL_0_9_7_BETA3</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENSSL_0_9_7_BETA1/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENSSL_0_9_7_BETA1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENSSL_0_9_7_BETA1">OPENSSL_0_9_7_BETA1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENSSL_0_9_7B/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENSSL_0_9_7B"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENSSL_0_9_7B">OPENSSL_0_9_7B</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_5_7_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_5_7_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_5_7_BASE">OPENBSD_5_7_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_5_6_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_5_6_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_5_6_BASE">OPENBSD_5_6_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_5_5_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_5_5_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_5_5_BASE">OPENBSD_5_5_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_5_4_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_5_4_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_5_4_BASE">OPENBSD_5_4_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_5_3_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_5_3_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_5_3_BASE">OPENBSD_5_3_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_5_2_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_5_2_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_5_2_BASE">OPENBSD_5_2_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_5_1_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_5_1_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_5_1_BASE">OPENBSD_5_1_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_5_0_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_5_0_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_5_0_BASE">OPENBSD_5_0_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_4_9_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_4_9_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_4_9_BASE">OPENBSD_4_9_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_4_8_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_4_8_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_4_8_BASE">OPENBSD_4_8_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_4_7_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_4_7_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_4_7_BASE">OPENBSD_4_7_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_4_6_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_4_6_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_4_6_BASE">OPENBSD_4_6_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_4_5_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_4_5_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_4_5_BASE">OPENBSD_4_5_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_4_4_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_4_4_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_4_4_BASE">OPENBSD_4_4_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_4_3_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_4_3_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_4_3_BASE">OPENBSD_4_3_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_4_2_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_4_2_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_4_2_BASE">OPENBSD_4_2_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_4_1_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_4_1_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_4_1_BASE">OPENBSD_4_1_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_4_0_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_4_0_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_4_0_BASE">OPENBSD_4_0_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_3_9_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_3_9_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_3_9_BASE">OPENBSD_3_9_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_3_8_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_3_8_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_3_8_BASE">OPENBSD_3_8_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_3_7_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_3_7_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_3_7_BASE">OPENBSD_3_7_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_3_6_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_3_6_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_3_6_BASE">OPENBSD_3_6_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_3_5_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_3_5_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_3_5_BASE">OPENBSD_3_5_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_3_4_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_3_4_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_3_4_BASE">OPENBSD_3_4_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_3_3_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_3_3_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_3_3_BASE">OPENBSD_3_3_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_3_2_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_3_2_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_3_2_BASE">OPENBSD_3_2_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_3_1_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_3_1_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_3_1_BASE">OPENBSD_3_1_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_3_0_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_3_0_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_3_0_BASE">OPENBSD_3_0_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_2_9_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_2_9_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_2_9_BASE">OPENBSD_2_9_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_2_8_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_2_8_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_2_8_BASE">OPENBSD_2_8_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_2_7_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_2_7_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_2_7_BASE">OPENBSD_2_7_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_2_6_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_2_6_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_2_6_BASE">OPENBSD_2_6_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_2_5_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_2_5_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_2_5_BASE">OPENBSD_2_5_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_2_4_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_2_4_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_2_4_BASE">OPENBSD_2_4_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_2_3_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_2_3_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_2_3_BASE">OPENBSD_2_3_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_2_2_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_2_2_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_2_2_BASE">OPENBSD_2_2_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_2_1_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_2_1_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_2_1_BASE">OPENBSD_2_1_BASE</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/libressl-portable/openbsd/tree/OPENBSD_2_0_BASE/src/lib/libssl/src/crypto/objects/objects.pl"
                 data-name="OPENBSD_2_0_BASE"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="OPENBSD_2_0_BASE">OPENBSD_2_0_BASE</a>
            </div>
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

  <div class="btn-group right">
    <a href="/libressl-portable/openbsd/find/master"
          class="js-show-file-finder btn btn-sm empty-icon tooltipped tooltipped-s"
          data-pjax
          data-hotkey="t"
          aria-label="Quickly jump between files">
      <span class="octicon octicon-list-unordered"></span>
    </a>
    <button aria-label="Copy file path to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button tooltipped tooltipped-s" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
  </div>

  <div class="breadcrumb js-zeroclipboard-target">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/libressl-portable/openbsd" class="" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">openbsd</span></a></span></span><span class="separator">/</span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/libressl-portable/openbsd/tree/master/src" class="" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">src</span></a></span><span class="separator">/</span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/libressl-portable/openbsd/tree/master/src/lib" class="" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">lib</span></a></span><span class="separator">/</span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/libressl-portable/openbsd/tree/master/src/lib/libssl" class="" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">libssl</span></a></span><span class="separator">/</span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/libressl-portable/openbsd/tree/master/src/lib/libssl/src" class="" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">src</span></a></span><span class="separator">/</span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/libressl-portable/openbsd/tree/master/src/lib/libssl/src/crypto" class="" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">crypto</span></a></span><span class="separator">/</span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/libressl-portable/openbsd/tree/master/src/lib/libssl/src/crypto/objects" class="" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">objects</span></a></span><span class="separator">/</span><strong class="final-path">objects.pl</strong>
  </div>
</div>


  <div class="commit file-history-tease">
    <div class="file-history-tease-header">
        <img alt="" class="avatar" height="24" src="https://assets-cdn.github.com/images/gravatars/gravatar-user-420.png" width="24" />
        <span class="author"><span>djm</span></span>
        <time datetime="2010-10-01T22:59:01Z" is="relative-time">Oct 1, 2010</time>
        <div class="commit-title">
            <a href="/libressl-portable/openbsd/commit/d8bbdfd0cd5cf42f6ffa51a5c97ee36b8ced1225" class="message" data-pjax="true" title="resolve conflicts, fix local changes">resolve conflicts, fix local changes</a>
        </div>
    </div>

    <div class="participation">
      <p class="quickstat">
        <a href="#blob_contributors_box" rel="facebox">
          <strong>0</strong>
           contributors
        </a>
      </p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
      </ul>
    </div>
  </div>

<div class="file">
  <div class="file-header">
    <div class="file-actions">

      <div class="btn-group">
        <a href="/libressl-portable/openbsd/raw/master/src/lib/libssl/src/crypto/objects/objects.pl" class="btn btn-sm " id="raw-url">Raw</a>
          <a href="/libressl-portable/openbsd/blame/master/src/lib/libssl/src/crypto/objects/objects.pl" class="btn btn-sm js-update-url-with-hash">Blame</a>
        <a href="/libressl-portable/openbsd/commits/master/src/lib/libssl/src/crypto/objects/objects.pl" class="btn btn-sm " rel="nofollow">History</a>
      </div>

        <a class="octicon-btn tooltipped tooltipped-nw"
           href="https://windows.github.com"
           aria-label="Open this file in GitHub for Windows">
            <span class="octicon octicon-device-desktop"></span>
        </a>

          <button type="button" class="octicon-btn disabled tooltipped tooltipped-n" aria-label="You must be signed in to make or propose changes">
            <span class="octicon octicon-pencil"></span>
          </button>

        <button type="button" class="octicon-btn octicon-btn-danger disabled tooltipped tooltipped-n" aria-label="You must be signed in to make or propose changes">
          <span class="octicon octicon-trashcan"></span>
        </button>
    </div>

    <div class="file-info">
        234 lines (220 sloc)
        <span class="file-info-divider"></span>
      7.237 kb
    </div>
  </div>
  
  <div class="blob-wrapper data type-perl">
      <table class="highlight tab-size-8 js-file-line-container">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code blob-code-inner js-file-line"><span class="pl-c">#!/usr/local/bin/perl</span></td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">open</span> (NUMIN,<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-smi">$ARGV</span>[1]<span class="pl-pds">&quot;</span></span>) || <span class="pl-k">die</span> <span class="pl-s"><span class="pl-pds">&quot;</span>Can&#39;t open number file <span class="pl-smi">$ARGV</span>[1]<span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code blob-code-inner js-file-line"><span class="pl-smi">$max_nid</span>=0;</td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code blob-code-inner js-file-line"><span class="pl-smi">$o</span>=0;</td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code blob-code-inner js-file-line"><span class="pl-k">while</span>(&lt;NUMIN&gt;)</td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">chop</span>;</td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$o</span>++;</td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code blob-code-inner js-file-line">	<span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span>#.*$</span><span class="pl-sr"><span class="pl-pds">//</span></span>;</td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">next</span> <span class="pl-k">if</span> /^\<span class="pl-c1">s</span>*<span class="pl-smi">$/</span>;</td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$_</span> = <span class="pl-s"><span class="pl-pds">&#39;</span>X<span class="pl-pds">&#39;</span></span>.<span class="pl-smi">$_</span>;</td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code blob-code-inner js-file-line">	(<span class="pl-smi">$Cname</span>,<span class="pl-smi">$mynum</span>) = <span class="pl-c1">split</span>;</td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$Cname</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span>^X</span><span class="pl-sr"><span class="pl-pds">//</span></span>;</td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">defined</span>(<span class="pl-smi">$nidn</span>{<span class="pl-smi">$mynum</span>}))</td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code blob-code-inner js-file-line">		{ <span class="pl-k">die</span> <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-smi">$ARGV</span>[1]:<span class="pl-smi">$o</span>:There&#39;s already an object with NID <span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$mynum</span>,<span class="pl-s"><span class="pl-pds">&quot;</span> on line <span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$order</span>{<span class="pl-smi">$mynum</span>},<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>; }</td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">defined</span>(<span class="pl-smi">$nid</span>{<span class="pl-smi">$Cname</span>}))</td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code blob-code-inner js-file-line">		{ <span class="pl-k">die</span> <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-smi">$ARGV</span>[1]:<span class="pl-smi">$o</span>:There&#39;s already an object with name <span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$Cname</span>,<span class="pl-s"><span class="pl-pds">&quot;</span> on line <span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$order</span>{<span class="pl-smi">$nid</span>{<span class="pl-smi">$Cname</span>}},<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>; }</td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$nid</span>{<span class="pl-smi">$Cname</span>} = <span class="pl-smi">$mynum</span>;</td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$nidn</span>{<span class="pl-smi">$mynum</span>} = <span class="pl-smi">$Cname</span>;</td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$order</span>{<span class="pl-smi">$mynum</span>} = <span class="pl-smi">$o</span>;</td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$max_nid</span> = <span class="pl-smi">$mynum</span> <span class="pl-k">if</span> <span class="pl-smi">$mynum</span> &gt; <span class="pl-smi">$max_nid</span>;</td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">close</span> NUMIN;</td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">open</span> (IN,<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-smi">$ARGV</span>[0]<span class="pl-pds">&quot;</span></span>) || <span class="pl-k">die</span> <span class="pl-s"><span class="pl-pds">&quot;</span>Can&#39;t open input file <span class="pl-smi">$ARGV</span>[0]<span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code blob-code-inner js-file-line"><span class="pl-smi">$Cname</span>=<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code blob-code-inner js-file-line"><span class="pl-smi">$o</span>=0;</td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code blob-code-inner js-file-line"><span class="pl-k">while</span> (&lt;IN&gt;)</td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">chop</span>;</td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$o</span>++;</td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (<span class="pl-sr"><span class="pl-pds">/</span>^!module<span class="pl-cce">\s</span>+(.*)<span class="pl-k">$</span><span class="pl-pds">/</span></span>)</td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code blob-code-inner js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$module</span> = <span class="pl-smi">$1</span>.<span class="pl-s"><span class="pl-pds">&quot;</span>-<span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$module</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span><span class="pl-cce">\.</span></span><span class="pl-sr"><span class="pl-pds">/</span>_<span class="pl-pds">/</span></span><span class="pl-sr"><span class="pl-pds"><span class="pl-k">g</span></span></span>;</td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$module</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span>-</span><span class="pl-sr"><span class="pl-pds">/</span>_<span class="pl-pds">/</span></span><span class="pl-sr"><span class="pl-pds"><span class="pl-k">g</span></span></span>;</td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code blob-code-inner js-file-line">        <span class="pl-k">if</span> (<span class="pl-sr"><span class="pl-pds">/</span>^!global<span class="pl-k">$</span><span class="pl-pds">/</span></span>)</td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code blob-code-inner js-file-line">		{ <span class="pl-smi">$module</span> = <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>; }</td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-sr"><span class="pl-pds">/</span>^!Cname<span class="pl-cce">\s</span>+(.*)<span class="pl-k">$</span><span class="pl-pds">/</span></span>)</td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code blob-code-inner js-file-line">		{ <span class="pl-smi">$Cname</span> = <span class="pl-smi">$1</span>; }</td>
      </tr>
      <tr>
        <td id="L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="LC43" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-sr"><span class="pl-pds">/</span>^!Alias<span class="pl-cce">\s</span>+(.+?)<span class="pl-cce">\s</span>+(.*)<span class="pl-k">$</span><span class="pl-pds">/</span></span>)</td>
      </tr>
      <tr>
        <td id="L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="LC44" class="blob-code blob-code-inner js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="LC45" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$Cname</span> = <span class="pl-smi">$module</span>.<span class="pl-smi">$1</span>;</td>
      </tr>
      <tr>
        <td id="L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="LC46" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$myoid</span> = <span class="pl-smi">$2</span>;</td>
      </tr>
      <tr>
        <td id="L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="LC47" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$myoid</span> = &amp;process_oid(<span class="pl-smi">$myoid</span>);</td>
      </tr>
      <tr>
        <td id="L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="LC48" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$Cname</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span>-</span><span class="pl-sr"><span class="pl-pds">/</span>_<span class="pl-pds">/</span></span><span class="pl-sr"><span class="pl-pds"><span class="pl-k">g</span></span></span>;</td>
      </tr>
      <tr>
        <td id="L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="LC49" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$ordern</span>{<span class="pl-smi">$o</span>} = <span class="pl-smi">$Cname</span>;</td>
      </tr>
      <tr>
        <td id="L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="LC50" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$order</span>{<span class="pl-smi">$Cname</span>} = <span class="pl-smi">$o</span>;</td>
      </tr>
      <tr>
        <td id="L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="LC51" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$obj</span>{<span class="pl-smi">$Cname</span>} = <span class="pl-smi">$myoid</span>;</td>
      </tr>
      <tr>
        <td id="L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="LC52" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$_</span> = <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="LC53" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$Cname</span> = <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="LC54" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="LC55" class="blob-code blob-code-inner js-file-line">	<span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span>!.*$</span><span class="pl-sr"><span class="pl-pds">//</span></span>;</td>
      </tr>
      <tr>
        <td id="L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="LC56" class="blob-code blob-code-inner js-file-line">	<span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span>#.*$</span><span class="pl-sr"><span class="pl-pds">//</span></span>;</td>
      </tr>
      <tr>
        <td id="L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="LC57" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">next</span> <span class="pl-k">if</span> /^\<span class="pl-c1">s</span>*<span class="pl-smi">$/</span>;</td>
      </tr>
      <tr>
        <td id="L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="LC58" class="blob-code blob-code-inner js-file-line">	(<span class="pl-smi">$myoid</span>,<span class="pl-smi">$mysn</span>,<span class="pl-smi">$myln</span>) = <span class="pl-c1">split</span> <span class="pl-s"><span class="pl-pds">&#39;</span>:<span class="pl-pds">&#39;</span></span>;</td>
      </tr>
      <tr>
        <td id="L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="LC59" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$mysn</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span>^<span class="pl-cce">\s</span>*</span><span class="pl-sr"><span class="pl-pds">//</span></span>;</td>
      </tr>
      <tr>
        <td id="L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="LC60" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$mysn</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span><span class="pl-cce">\s</span>*$</span><span class="pl-sr"><span class="pl-pds">//</span></span>;</td>
      </tr>
      <tr>
        <td id="L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="LC61" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$myln</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span>^<span class="pl-cce">\s</span>*</span><span class="pl-sr"><span class="pl-pds">//</span></span>;</td>
      </tr>
      <tr>
        <td id="L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="LC62" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$myln</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span><span class="pl-cce">\s</span>*$</span><span class="pl-sr"><span class="pl-pds">//</span></span>;</td>
      </tr>
      <tr>
        <td id="L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="LC63" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$myoid</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span>^<span class="pl-cce">\s</span>*</span><span class="pl-sr"><span class="pl-pds">//</span></span>;</td>
      </tr>
      <tr>
        <td id="L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="LC64" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$myoid</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span><span class="pl-cce">\s</span>*$</span><span class="pl-sr"><span class="pl-pds">//</span></span>;</td>
      </tr>
      <tr>
        <td id="L65" class="blob-num js-line-number" data-line-number="65"></td>
        <td id="LC65" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-smi">$myoid</span> <span class="pl-c1">ne</span> <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>)</td>
      </tr>
      <tr>
        <td id="L66" class="blob-num js-line-number" data-line-number="66"></td>
        <td id="LC66" class="blob-code blob-code-inner js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L67" class="blob-num js-line-number" data-line-number="67"></td>
        <td id="LC67" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$myoid</span> = &amp;process_oid(<span class="pl-smi">$myoid</span>);</td>
      </tr>
      <tr>
        <td id="L68" class="blob-num js-line-number" data-line-number="68"></td>
        <td id="LC68" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L69" class="blob-num js-line-number" data-line-number="69"></td>
        <td id="LC69" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L70" class="blob-num js-line-number" data-line-number="70"></td>
        <td id="LC70" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-smi">$Cname</span> <span class="pl-c1">eq</span> <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span> &amp;&amp; !(<span class="pl-smi">$myln</span> =~ <span class="pl-sr"><span class="pl-pds">/</span> <span class="pl-pds">/</span></span>))</td>
      </tr>
      <tr>
        <td id="L71" class="blob-num js-line-number" data-line-number="71"></td>
        <td id="LC71" class="blob-code blob-code-inner js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L72" class="blob-num js-line-number" data-line-number="72"></td>
        <td id="LC72" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$Cname</span> = <span class="pl-smi">$myln</span>;</td>
      </tr>
      <tr>
        <td id="L73" class="blob-num js-line-number" data-line-number="73"></td>
        <td id="LC73" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$Cname</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span><span class="pl-cce">\.</span></span><span class="pl-sr"><span class="pl-pds">/</span>_<span class="pl-pds">/</span></span><span class="pl-sr"><span class="pl-pds"><span class="pl-k">g</span></span></span>;</td>
      </tr>
      <tr>
        <td id="L74" class="blob-num js-line-number" data-line-number="74"></td>
        <td id="LC74" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$Cname</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span>-</span><span class="pl-sr"><span class="pl-pds">/</span>_<span class="pl-pds">/</span></span><span class="pl-sr"><span class="pl-pds"><span class="pl-k">g</span></span></span>;</td>
      </tr>
      <tr>
        <td id="L75" class="blob-num js-line-number" data-line-number="75"></td>
        <td id="LC75" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (<span class="pl-smi">$Cname</span> <span class="pl-c1">ne</span> <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span> &amp;&amp; <span class="pl-c1">defined</span>(<span class="pl-smi">$ln</span>{<span class="pl-smi">$module</span>.<span class="pl-smi">$Cname</span>}))</td>
      </tr>
      <tr>
        <td id="L76" class="blob-num js-line-number" data-line-number="76"></td>
        <td id="LC76" class="blob-code blob-code-inner js-file-line">			{ <span class="pl-k">die</span> <span class="pl-s"><span class="pl-pds">&quot;</span>objects.txt:<span class="pl-smi">$o</span>:There&#39;s already an object with long name <span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$ln</span>{<span class="pl-smi">$module</span>.<span class="pl-smi">$Cname</span>},<span class="pl-s"><span class="pl-pds">&quot;</span> on line <span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$order</span>{<span class="pl-smi">$module</span>.<span class="pl-smi">$Cname</span>},<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>; }</td>
      </tr>
      <tr>
        <td id="L77" class="blob-num js-line-number" data-line-number="77"></td>
        <td id="LC77" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L78" class="blob-num js-line-number" data-line-number="78"></td>
        <td id="LC78" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-smi">$Cname</span> <span class="pl-c1">eq</span> <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>)</td>
      </tr>
      <tr>
        <td id="L79" class="blob-num js-line-number" data-line-number="79"></td>
        <td id="LC79" class="blob-code blob-code-inner js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L80" class="blob-num js-line-number" data-line-number="80"></td>
        <td id="LC80" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$Cname</span> = <span class="pl-smi">$mysn</span>;</td>
      </tr>
      <tr>
        <td id="L81" class="blob-num js-line-number" data-line-number="81"></td>
        <td id="LC81" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$Cname</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span>-</span><span class="pl-sr"><span class="pl-pds">/</span>_<span class="pl-pds">/</span></span><span class="pl-sr"><span class="pl-pds"><span class="pl-k">g</span></span></span>;</td>
      </tr>
      <tr>
        <td id="L82" class="blob-num js-line-number" data-line-number="82"></td>
        <td id="LC82" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (<span class="pl-smi">$Cname</span> <span class="pl-c1">ne</span> <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span> &amp;&amp; <span class="pl-c1">defined</span>(<span class="pl-smi">$sn</span>{<span class="pl-smi">$module</span>.<span class="pl-smi">$Cname</span>}))</td>
      </tr>
      <tr>
        <td id="L83" class="blob-num js-line-number" data-line-number="83"></td>
        <td id="LC83" class="blob-code blob-code-inner js-file-line">			{ <span class="pl-k">die</span> <span class="pl-s"><span class="pl-pds">&quot;</span>objects.txt:<span class="pl-smi">$o</span>:There&#39;s already an object with short name <span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$sn</span>{<span class="pl-smi">$module</span>.<span class="pl-smi">$Cname</span>},<span class="pl-s"><span class="pl-pds">&quot;</span> on line <span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$order</span>{<span class="pl-smi">$module</span>.<span class="pl-smi">$Cname</span>},<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>; }</td>
      </tr>
      <tr>
        <td id="L84" class="blob-num js-line-number" data-line-number="84"></td>
        <td id="LC84" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L85" class="blob-num js-line-number" data-line-number="85"></td>
        <td id="LC85" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-smi">$Cname</span> <span class="pl-c1">eq</span> <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>)</td>
      </tr>
      <tr>
        <td id="L86" class="blob-num js-line-number" data-line-number="86"></td>
        <td id="LC86" class="blob-code blob-code-inner js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L87" class="blob-num js-line-number" data-line-number="87"></td>
        <td id="LC87" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$Cname</span> = <span class="pl-smi">$myln</span>;</td>
      </tr>
      <tr>
        <td id="L88" class="blob-num js-line-number" data-line-number="88"></td>
        <td id="LC88" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$Cname</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span>-</span><span class="pl-sr"><span class="pl-pds">/</span>_<span class="pl-pds">/</span></span><span class="pl-sr"><span class="pl-pds"><span class="pl-k">g</span></span></span>;</td>
      </tr>
      <tr>
        <td id="L89" class="blob-num js-line-number" data-line-number="89"></td>
        <td id="LC89" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$Cname</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span><span class="pl-cce">\.</span></span><span class="pl-sr"><span class="pl-pds">/</span>_<span class="pl-pds">/</span></span><span class="pl-sr"><span class="pl-pds"><span class="pl-k">g</span></span></span>;</td>
      </tr>
      <tr>
        <td id="L90" class="blob-num js-line-number" data-line-number="90"></td>
        <td id="LC90" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$Cname</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span> </span><span class="pl-sr"><span class="pl-pds">/</span>_<span class="pl-pds">/</span></span><span class="pl-sr"><span class="pl-pds"><span class="pl-k">g</span></span></span>;</td>
      </tr>
      <tr>
        <td id="L91" class="blob-num js-line-number" data-line-number="91"></td>
        <td id="LC91" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (<span class="pl-smi">$Cname</span> <span class="pl-c1">ne</span> <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span> &amp;&amp; <span class="pl-c1">defined</span>(<span class="pl-smi">$ln</span>{<span class="pl-smi">$module</span>.<span class="pl-smi">$Cname</span>}))</td>
      </tr>
      <tr>
        <td id="L92" class="blob-num js-line-number" data-line-number="92"></td>
        <td id="LC92" class="blob-code blob-code-inner js-file-line">			{ <span class="pl-k">die</span> <span class="pl-s"><span class="pl-pds">&quot;</span>objects.txt:<span class="pl-smi">$o</span>:There&#39;s already an object with long name <span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$ln</span>{<span class="pl-smi">$module</span>.<span class="pl-smi">$Cname</span>},<span class="pl-s"><span class="pl-pds">&quot;</span> on line <span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$order</span>{<span class="pl-smi">$module</span>.<span class="pl-smi">$Cname</span>},<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>; }</td>
      </tr>
      <tr>
        <td id="L93" class="blob-num js-line-number" data-line-number="93"></td>
        <td id="LC93" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L94" class="blob-num js-line-number" data-line-number="94"></td>
        <td id="LC94" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$Cname</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span><span class="pl-cce">\.</span></span><span class="pl-sr"><span class="pl-pds">/</span>_<span class="pl-pds">/</span></span><span class="pl-sr"><span class="pl-pds"><span class="pl-k">g</span></span></span>;</td>
      </tr>
      <tr>
        <td id="L95" class="blob-num js-line-number" data-line-number="95"></td>
        <td id="LC95" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$Cname</span> =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span>-</span><span class="pl-sr"><span class="pl-pds">/</span>_<span class="pl-pds">/</span></span><span class="pl-sr"><span class="pl-pds"><span class="pl-k">g</span></span></span>;</td>
      </tr>
      <tr>
        <td id="L96" class="blob-num js-line-number" data-line-number="96"></td>
        <td id="LC96" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$Cname</span> = <span class="pl-smi">$module</span>.<span class="pl-smi">$Cname</span>;</td>
      </tr>
      <tr>
        <td id="L97" class="blob-num js-line-number" data-line-number="97"></td>
        <td id="LC97" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$ordern</span>{<span class="pl-smi">$o</span>} = <span class="pl-smi">$Cname</span>;</td>
      </tr>
      <tr>
        <td id="L98" class="blob-num js-line-number" data-line-number="98"></td>
        <td id="LC98" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$order</span>{<span class="pl-smi">$Cname</span>} = <span class="pl-smi">$o</span>;</td>
      </tr>
      <tr>
        <td id="L99" class="blob-num js-line-number" data-line-number="99"></td>
        <td id="LC99" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$sn</span>{<span class="pl-smi">$Cname</span>} = <span class="pl-smi">$mysn</span>;</td>
      </tr>
      <tr>
        <td id="L100" class="blob-num js-line-number" data-line-number="100"></td>
        <td id="LC100" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$ln</span>{<span class="pl-smi">$Cname</span>} = <span class="pl-smi">$myln</span>;</td>
      </tr>
      <tr>
        <td id="L101" class="blob-num js-line-number" data-line-number="101"></td>
        <td id="LC101" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$obj</span>{<span class="pl-smi">$Cname</span>} = <span class="pl-smi">$myoid</span>;</td>
      </tr>
      <tr>
        <td id="L102" class="blob-num js-line-number" data-line-number="102"></td>
        <td id="LC102" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">defined</span>(<span class="pl-smi">$nid</span>{<span class="pl-smi">$Cname</span>}))</td>
      </tr>
      <tr>
        <td id="L103" class="blob-num js-line-number" data-line-number="103"></td>
        <td id="LC103" class="blob-code blob-code-inner js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L104" class="blob-num js-line-number" data-line-number="104"></td>
        <td id="LC104" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$max_nid</span>++;</td>
      </tr>
      <tr>
        <td id="L105" class="blob-num js-line-number" data-line-number="105"></td>
        <td id="LC105" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$nid</span>{<span class="pl-smi">$Cname</span>} = <span class="pl-smi">$max_nid</span>;</td>
      </tr>
      <tr>
        <td id="L106" class="blob-num js-line-number" data-line-number="106"></td>
        <td id="LC106" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$nidn</span>{<span class="pl-smi">$max_nid</span>} = <span class="pl-smi">$Cname</span>;</td>
      </tr>
      <tr>
        <td id="L107" class="blob-num js-line-number" data-line-number="107"></td>
        <td id="LC107" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">print</span> <span class="pl-c1">STDERR</span> <span class="pl-s"><span class="pl-pds">&quot;</span>Added OID <span class="pl-smi">$Cname</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L108" class="blob-num js-line-number" data-line-number="108"></td>
        <td id="LC108" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L109" class="blob-num js-line-number" data-line-number="109"></td>
        <td id="LC109" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$Cname</span>=<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L110" class="blob-num js-line-number" data-line-number="110"></td>
        <td id="LC110" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L111" class="blob-num js-line-number" data-line-number="111"></td>
        <td id="LC111" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">close</span> IN;</td>
      </tr>
      <tr>
        <td id="L112" class="blob-num js-line-number" data-line-number="112"></td>
        <td id="LC112" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L113" class="blob-num js-line-number" data-line-number="113"></td>
        <td id="LC113" class="blob-code blob-code-inner js-file-line"><span class="pl-c">#XXX don&#39;t modify input files</span></td>
      </tr>
      <tr>
        <td id="L114" class="blob-num js-line-number" data-line-number="114"></td>
        <td id="LC114" class="blob-code blob-code-inner js-file-line"><span class="pl-c">#open (NUMOUT,&quot;&gt;$ARGV[1]&quot;) || die &quot;Can&#39;t open output file $ARGV[1]&quot;;</span></td>
      </tr>
      <tr>
        <td id="L115" class="blob-num js-line-number" data-line-number="115"></td>
        <td id="LC115" class="blob-code blob-code-inner js-file-line"><span class="pl-c">#foreach (sort { $a &lt;=&gt; $b } keys %nidn)</span></td>
      </tr>
      <tr>
        <td id="L116" class="blob-num js-line-number" data-line-number="116"></td>
        <td id="LC116" class="blob-code blob-code-inner js-file-line"><span class="pl-c">#	{</span></td>
      </tr>
      <tr>
        <td id="L117" class="blob-num js-line-number" data-line-number="117"></td>
        <td id="LC117" class="blob-code blob-code-inner js-file-line"><span class="pl-c">#	print NUMOUT $nidn{$_},&quot;\t\t&quot;,$_,&quot;\n&quot;;</span></td>
      </tr>
      <tr>
        <td id="L118" class="blob-num js-line-number" data-line-number="118"></td>
        <td id="LC118" class="blob-code blob-code-inner js-file-line"><span class="pl-c">#	}</span></td>
      </tr>
      <tr>
        <td id="L119" class="blob-num js-line-number" data-line-number="119"></td>
        <td id="LC119" class="blob-code blob-code-inner js-file-line"><span class="pl-c">#close NUMOUT;</span></td>
      </tr>
      <tr>
        <td id="L120" class="blob-num js-line-number" data-line-number="120"></td>
        <td id="LC120" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L121" class="blob-num js-line-number" data-line-number="121"></td>
        <td id="LC121" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">open</span> (OUT,<span class="pl-s"><span class="pl-pds">&quot;</span>&gt;<span class="pl-smi">$ARGV</span>[2]<span class="pl-pds">&quot;</span></span>) || <span class="pl-k">die</span> <span class="pl-s"><span class="pl-pds">&quot;</span>Can&#39;t open output file <span class="pl-smi">$ARGV</span>[2]<span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L122" class="blob-num js-line-number" data-line-number="122"></td>
        <td id="LC122" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">print</span> OUT <span class="pl-pds"><span class="pl-s">&lt;&lt;&#39;EOF&#39;</span>;</span><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L123" class="blob-num js-line-number" data-line-number="123"></td>
        <td id="LC123" class="blob-code blob-code-inner js-file-line"><span class="pl-s">/* crypto/objects/obj_mac.h */</span></td>
      </tr>
      <tr>
        <td id="L124" class="blob-num js-line-number" data-line-number="124"></td>
        <td id="LC124" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L125" class="blob-num js-line-number" data-line-number="125"></td>
        <td id="LC125" class="blob-code blob-code-inner js-file-line"><span class="pl-s">/* THIS FILE IS GENERATED FROM objects.txt by objects.pl via the</span></td>
      </tr>
      <tr>
        <td id="L126" class="blob-num js-line-number" data-line-number="126"></td>
        <td id="LC126" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * following command:</span></td>
      </tr>
      <tr>
        <td id="L127" class="blob-num js-line-number" data-line-number="127"></td>
        <td id="LC127" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * perl objects.pl objects.txt obj_mac.num obj_mac.h</span></td>
      </tr>
      <tr>
        <td id="L128" class="blob-num js-line-number" data-line-number="128"></td>
        <td id="LC128" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> */</span></td>
      </tr>
      <tr>
        <td id="L129" class="blob-num js-line-number" data-line-number="129"></td>
        <td id="LC129" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L130" class="blob-num js-line-number" data-line-number="130"></td>
        <td id="LC130" class="blob-code blob-code-inner js-file-line"><span class="pl-s">/* Copyright (C) 1995-1997 Eric Young (eay@cryptsoft.com)</span></td>
      </tr>
      <tr>
        <td id="L131" class="blob-num js-line-number" data-line-number="131"></td>
        <td id="LC131" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * All rights reserved.</span></td>
      </tr>
      <tr>
        <td id="L132" class="blob-num js-line-number" data-line-number="132"></td>
        <td id="LC132" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> *</span></td>
      </tr>
      <tr>
        <td id="L133" class="blob-num js-line-number" data-line-number="133"></td>
        <td id="LC133" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * This package is an SSL implementation written</span></td>
      </tr>
      <tr>
        <td id="L134" class="blob-num js-line-number" data-line-number="134"></td>
        <td id="LC134" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * by Eric Young (eay@cryptsoft.com).</span></td>
      </tr>
      <tr>
        <td id="L135" class="blob-num js-line-number" data-line-number="135"></td>
        <td id="LC135" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * The implementation was written so as to conform with Netscapes SSL.</span></td>
      </tr>
      <tr>
        <td id="L136" class="blob-num js-line-number" data-line-number="136"></td>
        <td id="LC136" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * </span></td>
      </tr>
      <tr>
        <td id="L137" class="blob-num js-line-number" data-line-number="137"></td>
        <td id="LC137" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * This library is free for commercial and non-commercial use as long as</span></td>
      </tr>
      <tr>
        <td id="L138" class="blob-num js-line-number" data-line-number="138"></td>
        <td id="LC138" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * the following conditions are aheared to.  The following conditions</span></td>
      </tr>
      <tr>
        <td id="L139" class="blob-num js-line-number" data-line-number="139"></td>
        <td id="LC139" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * apply to all code found in this distribution, be it the RC4, RSA,</span></td>
      </tr>
      <tr>
        <td id="L140" class="blob-num js-line-number" data-line-number="140"></td>
        <td id="LC140" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * lhash, DES, etc., code; not just the SSL code.  The SSL documentation</span></td>
      </tr>
      <tr>
        <td id="L141" class="blob-num js-line-number" data-line-number="141"></td>
        <td id="LC141" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * included with this distribution is covered by the same copyright terms</span></td>
      </tr>
      <tr>
        <td id="L142" class="blob-num js-line-number" data-line-number="142"></td>
        <td id="LC142" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * except that the holder is Tim Hudson (tjh@cryptsoft.com).</span></td>
      </tr>
      <tr>
        <td id="L143" class="blob-num js-line-number" data-line-number="143"></td>
        <td id="LC143" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * </span></td>
      </tr>
      <tr>
        <td id="L144" class="blob-num js-line-number" data-line-number="144"></td>
        <td id="LC144" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * Copyright remains Eric Young&#39;s, and as such any Copyright notices in</span></td>
      </tr>
      <tr>
        <td id="L145" class="blob-num js-line-number" data-line-number="145"></td>
        <td id="LC145" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * the code are not to be removed.</span></td>
      </tr>
      <tr>
        <td id="L146" class="blob-num js-line-number" data-line-number="146"></td>
        <td id="LC146" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * If this package is used in a product, Eric Young should be given attribution</span></td>
      </tr>
      <tr>
        <td id="L147" class="blob-num js-line-number" data-line-number="147"></td>
        <td id="LC147" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * as the author of the parts of the library used.</span></td>
      </tr>
      <tr>
        <td id="L148" class="blob-num js-line-number" data-line-number="148"></td>
        <td id="LC148" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * This can be in the form of a textual message at program startup or</span></td>
      </tr>
      <tr>
        <td id="L149" class="blob-num js-line-number" data-line-number="149"></td>
        <td id="LC149" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * in documentation (online or textual) provided with the package.</span></td>
      </tr>
      <tr>
        <td id="L150" class="blob-num js-line-number" data-line-number="150"></td>
        <td id="LC150" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * </span></td>
      </tr>
      <tr>
        <td id="L151" class="blob-num js-line-number" data-line-number="151"></td>
        <td id="LC151" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * Redistribution and use in source and binary forms, with or without</span></td>
      </tr>
      <tr>
        <td id="L152" class="blob-num js-line-number" data-line-number="152"></td>
        <td id="LC152" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * modification, are permitted provided that the following conditions</span></td>
      </tr>
      <tr>
        <td id="L153" class="blob-num js-line-number" data-line-number="153"></td>
        <td id="LC153" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * are met:</span></td>
      </tr>
      <tr>
        <td id="L154" class="blob-num js-line-number" data-line-number="154"></td>
        <td id="LC154" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * 1. Redistributions of source code must retain the copyright</span></td>
      </tr>
      <tr>
        <td id="L155" class="blob-num js-line-number" data-line-number="155"></td>
        <td id="LC155" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> *    notice, this list of conditions and the following disclaimer.</span></td>
      </tr>
      <tr>
        <td id="L156" class="blob-num js-line-number" data-line-number="156"></td>
        <td id="LC156" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * 2. Redistributions in binary form must reproduce the above copyright</span></td>
      </tr>
      <tr>
        <td id="L157" class="blob-num js-line-number" data-line-number="157"></td>
        <td id="LC157" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> *    notice, this list of conditions and the following disclaimer in the</span></td>
      </tr>
      <tr>
        <td id="L158" class="blob-num js-line-number" data-line-number="158"></td>
        <td id="LC158" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> *    documentation and/or other materials provided with the distribution.</span></td>
      </tr>
      <tr>
        <td id="L159" class="blob-num js-line-number" data-line-number="159"></td>
        <td id="LC159" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * 3. All advertising materials mentioning features or use of this software</span></td>
      </tr>
      <tr>
        <td id="L160" class="blob-num js-line-number" data-line-number="160"></td>
        <td id="LC160" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> *    must display the following acknowledgement:</span></td>
      </tr>
      <tr>
        <td id="L161" class="blob-num js-line-number" data-line-number="161"></td>
        <td id="LC161" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> *    &quot;This product includes cryptographic software written by</span></td>
      </tr>
      <tr>
        <td id="L162" class="blob-num js-line-number" data-line-number="162"></td>
        <td id="LC162" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> *     Eric Young (eay@cryptsoft.com)&quot;</span></td>
      </tr>
      <tr>
        <td id="L163" class="blob-num js-line-number" data-line-number="163"></td>
        <td id="LC163" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> *    The word &#39;cryptographic&#39; can be left out if the rouines from the library</span></td>
      </tr>
      <tr>
        <td id="L164" class="blob-num js-line-number" data-line-number="164"></td>
        <td id="LC164" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> *    being used are not cryptographic related :-).</span></td>
      </tr>
      <tr>
        <td id="L165" class="blob-num js-line-number" data-line-number="165"></td>
        <td id="LC165" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * 4. If you include any Windows specific code (or a derivative thereof) from </span></td>
      </tr>
      <tr>
        <td id="L166" class="blob-num js-line-number" data-line-number="166"></td>
        <td id="LC166" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> *    the apps directory (application code) you must include an acknowledgement:</span></td>
      </tr>
      <tr>
        <td id="L167" class="blob-num js-line-number" data-line-number="167"></td>
        <td id="LC167" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> *    &quot;This product includes software written by Tim Hudson (tjh@cryptsoft.com)&quot;</span></td>
      </tr>
      <tr>
        <td id="L168" class="blob-num js-line-number" data-line-number="168"></td>
        <td id="LC168" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * </span></td>
      </tr>
      <tr>
        <td id="L169" class="blob-num js-line-number" data-line-number="169"></td>
        <td id="LC169" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * THIS SOFTWARE IS PROVIDED BY ERIC YOUNG ``AS IS&#39;&#39; AND</span></td>
      </tr>
      <tr>
        <td id="L170" class="blob-num js-line-number" data-line-number="170"></td>
        <td id="LC170" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE</span></td>
      </tr>
      <tr>
        <td id="L171" class="blob-num js-line-number" data-line-number="171"></td>
        <td id="LC171" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE</span></td>
      </tr>
      <tr>
        <td id="L172" class="blob-num js-line-number" data-line-number="172"></td>
        <td id="LC172" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE</span></td>
      </tr>
      <tr>
        <td id="L173" class="blob-num js-line-number" data-line-number="173"></td>
        <td id="LC173" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL</span></td>
      </tr>
      <tr>
        <td id="L174" class="blob-num js-line-number" data-line-number="174"></td>
        <td id="LC174" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS</span></td>
      </tr>
      <tr>
        <td id="L175" class="blob-num js-line-number" data-line-number="175"></td>
        <td id="LC175" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)</span></td>
      </tr>
      <tr>
        <td id="L176" class="blob-num js-line-number" data-line-number="176"></td>
        <td id="LC176" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT</span></td>
      </tr>
      <tr>
        <td id="L177" class="blob-num js-line-number" data-line-number="177"></td>
        <td id="LC177" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY</span></td>
      </tr>
      <tr>
        <td id="L178" class="blob-num js-line-number" data-line-number="178"></td>
        <td id="LC178" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF</span></td>
      </tr>
      <tr>
        <td id="L179" class="blob-num js-line-number" data-line-number="179"></td>
        <td id="LC179" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * SUCH DAMAGE.</span></td>
      </tr>
      <tr>
        <td id="L180" class="blob-num js-line-number" data-line-number="180"></td>
        <td id="LC180" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * </span></td>
      </tr>
      <tr>
        <td id="L181" class="blob-num js-line-number" data-line-number="181"></td>
        <td id="LC181" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * The licence and distribution terms for any publically available version or</span></td>
      </tr>
      <tr>
        <td id="L182" class="blob-num js-line-number" data-line-number="182"></td>
        <td id="LC182" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * derivative of this code cannot be changed.  i.e. this code cannot simply be</span></td>
      </tr>
      <tr>
        <td id="L183" class="blob-num js-line-number" data-line-number="183"></td>
        <td id="LC183" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * copied and put under another distribution licence</span></td>
      </tr>
      <tr>
        <td id="L184" class="blob-num js-line-number" data-line-number="184"></td>
        <td id="LC184" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> * [including the GNU Public Licence.]</span></td>
      </tr>
      <tr>
        <td id="L185" class="blob-num js-line-number" data-line-number="185"></td>
        <td id="LC185" class="blob-code blob-code-inner js-file-line"><span class="pl-s"> */</span></td>
      </tr>
      <tr>
        <td id="L186" class="blob-num js-line-number" data-line-number="186"></td>
        <td id="LC186" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L187" class="blob-num js-line-number" data-line-number="187"></td>
        <td id="LC187" class="blob-code blob-code-inner js-file-line"><span class="pl-s">#define SN_undef			&quot;UNDEF&quot;</span></td>
      </tr>
      <tr>
        <td id="L188" class="blob-num js-line-number" data-line-number="188"></td>
        <td id="LC188" class="blob-code blob-code-inner js-file-line"><span class="pl-s">#define LN_undef			&quot;undefined&quot;</span></td>
      </tr>
      <tr>
        <td id="L189" class="blob-num js-line-number" data-line-number="189"></td>
        <td id="LC189" class="blob-code blob-code-inner js-file-line"><span class="pl-s">#define NID_undef			0</span></td>
      </tr>
      <tr>
        <td id="L190" class="blob-num js-line-number" data-line-number="190"></td>
        <td id="LC190" class="blob-code blob-code-inner js-file-line"><span class="pl-s">#define OBJ_undef			0L</span></td>
      </tr>
      <tr>
        <td id="L191" class="blob-num js-line-number" data-line-number="191"></td>
        <td id="LC191" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span></td>
      </tr>
      <tr>
        <td id="L192" class="blob-num js-line-number" data-line-number="192"></td>
        <td id="LC192" class="blob-code blob-code-inner js-file-line"><span class="pl-s"></span><span class="pl-pds"><span class="pl-s">EOF</span></span></td>
      </tr>
      <tr>
        <td id="L193" class="blob-num js-line-number" data-line-number="193"></td>
        <td id="LC193" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L194" class="blob-num js-line-number" data-line-number="194"></td>
        <td id="LC194" class="blob-code blob-code-inner js-file-line"><span class="pl-k">foreach</span> (<span class="pl-c1">sort</span> { <span class="pl-smi">$a</span> <span class="pl-k">&lt;=&gt;</span> <span class="pl-smi">$b</span> } <span class="pl-c1">keys</span> <span class="pl-smi">%ordern</span>)</td>
      </tr>
      <tr>
        <td id="L195" class="blob-num js-line-number" data-line-number="195"></td>
        <td id="LC195" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L196" class="blob-num js-line-number" data-line-number="196"></td>
        <td id="LC196" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$Cname</span>=<span class="pl-smi">$ordern</span>{<span class="pl-smi">$_</span>};</td>
      </tr>
      <tr>
        <td id="L197" class="blob-num js-line-number" data-line-number="197"></td>
        <td id="LC197" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">print</span> OUT <span class="pl-s"><span class="pl-pds">&quot;</span>#define SN_<span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$Cname</span>,<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t\t\&quot;</span><span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$sn</span>{<span class="pl-smi">$Cname</span>},<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\&quot;\n</span><span class="pl-pds">&quot;</span></span> <span class="pl-k">if</span> <span class="pl-smi">$sn</span>{<span class="pl-smi">$Cname</span>} <span class="pl-c1">ne</span> <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L198" class="blob-num js-line-number" data-line-number="198"></td>
        <td id="LC198" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">print</span> OUT <span class="pl-s"><span class="pl-pds">&quot;</span>#define LN_<span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$Cname</span>,<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t\t\&quot;</span><span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$ln</span>{<span class="pl-smi">$Cname</span>},<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\&quot;\n</span><span class="pl-pds">&quot;</span></span> <span class="pl-k">if</span> <span class="pl-smi">$ln</span>{<span class="pl-smi">$Cname</span>} <span class="pl-c1">ne</span> <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L199" class="blob-num js-line-number" data-line-number="199"></td>
        <td id="LC199" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">print</span> OUT <span class="pl-s"><span class="pl-pds">&quot;</span>#define NID_<span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$Cname</span>,<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t\t</span><span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$nid</span>{<span class="pl-smi">$Cname</span>},<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span> <span class="pl-k">if</span> <span class="pl-smi">$nid</span>{<span class="pl-smi">$Cname</span>} <span class="pl-c1">ne</span> <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L200" class="blob-num js-line-number" data-line-number="200"></td>
        <td id="LC200" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">print</span> OUT <span class="pl-s"><span class="pl-pds">&quot;</span>#define OBJ_<span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$Cname</span>,<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\t\t</span><span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$obj</span>{<span class="pl-smi">$Cname</span>},<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span> <span class="pl-k">if</span> <span class="pl-smi">$obj</span>{<span class="pl-smi">$Cname</span>} <span class="pl-c1">ne</span> <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L201" class="blob-num js-line-number" data-line-number="201"></td>
        <td id="LC201" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">print</span> OUT <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L202" class="blob-num js-line-number" data-line-number="202"></td>
        <td id="LC202" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L203" class="blob-num js-line-number" data-line-number="203"></td>
        <td id="LC203" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L204" class="blob-num js-line-number" data-line-number="204"></td>
        <td id="LC204" class="blob-code blob-code-inner js-file-line"><span class="pl-c1">close</span> OUT;</td>
      </tr>
      <tr>
        <td id="L205" class="blob-num js-line-number" data-line-number="205"></td>
        <td id="LC205" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L206" class="blob-num js-line-number" data-line-number="206"></td>
        <td id="LC206" class="blob-code blob-code-inner js-file-line"><span class="pl-k">sub</span> <span class="pl-en">process_oid</span></td>
      </tr>
      <tr>
        <td id="L207" class="blob-num js-line-number" data-line-number="207"></td>
        <td id="LC207" class="blob-code blob-code-inner js-file-line">	{</td>
      </tr>
      <tr>
        <td id="L208" class="blob-num js-line-number" data-line-number="208"></td>
        <td id="LC208" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">local</span>(<span class="pl-smi">$oid</span>)=<span class="pl-smi">@_</span>;</td>
      </tr>
      <tr>
        <td id="L209" class="blob-num js-line-number" data-line-number="209"></td>
        <td id="LC209" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">local</span>(<span class="pl-smi">@a</span>,<span class="pl-smi">$oid_pref</span>);</td>
      </tr>
      <tr>
        <td id="L210" class="blob-num js-line-number" data-line-number="210"></td>
        <td id="LC210" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L211" class="blob-num js-line-number" data-line-number="211"></td>
        <td id="LC211" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">@a</span> = <span class="pl-c1">split</span>(<span class="pl-sr"><span class="pl-pds">/</span><span class="pl-cce">\s</span>+<span class="pl-pds">/</span></span>,<span class="pl-smi">$myoid</span>);</td>
      </tr>
      <tr>
        <td id="L212" class="blob-num js-line-number" data-line-number="212"></td>
        <td id="LC212" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$pref_oid</span> = <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L213" class="blob-num js-line-number" data-line-number="213"></td>
        <td id="LC213" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$pref_sep</span> = <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L214" class="blob-num js-line-number" data-line-number="214"></td>
        <td id="LC214" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!(<span class="pl-smi">$a</span>[0] =~ <span class="pl-sr"><span class="pl-pds">/</span>^[0-9]+<span class="pl-k">$</span><span class="pl-pds">/</span></span>))</td>
      </tr>
      <tr>
        <td id="L215" class="blob-num js-line-number" data-line-number="215"></td>
        <td id="LC215" class="blob-code blob-code-inner js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L216" class="blob-num js-line-number" data-line-number="216"></td>
        <td id="LC216" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$a</span>[0] =~ <span class="pl-sr"><span class="pl-pds"><span class="pl-c1">s</span>/</span>-</span><span class="pl-sr"><span class="pl-pds">/</span>_<span class="pl-pds">/</span></span><span class="pl-sr"><span class="pl-pds"><span class="pl-k">g</span></span></span>;</td>
      </tr>
      <tr>
        <td id="L217" class="blob-num js-line-number" data-line-number="217"></td>
        <td id="LC217" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (!<span class="pl-c1">defined</span>(<span class="pl-smi">$obj</span>{<span class="pl-smi">$a</span>[0]}))</td>
      </tr>
      <tr>
        <td id="L218" class="blob-num js-line-number" data-line-number="218"></td>
        <td id="LC218" class="blob-code blob-code-inner js-file-line">			{ <span class="pl-k">die</span> <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-smi">$ARGV</span>[0]:<span class="pl-smi">$o</span>:Undefined identifier <span class="pl-pds">&quot;</span></span>,<span class="pl-smi">$a</span>[0],<span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>; }</td>
      </tr>
      <tr>
        <td id="L219" class="blob-num js-line-number" data-line-number="219"></td>
        <td id="LC219" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$pref_oid</span> = <span class="pl-s"><span class="pl-pds">&quot;</span>OBJ_<span class="pl-pds">&quot;</span></span> . <span class="pl-smi">$a</span>[0];</td>
      </tr>
      <tr>
        <td id="L220" class="blob-num js-line-number" data-line-number="220"></td>
        <td id="LC220" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$pref_sep</span> = <span class="pl-s"><span class="pl-pds">&quot;</span>,<span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L221" class="blob-num js-line-number" data-line-number="221"></td>
        <td id="LC221" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">shift</span> <span class="pl-smi">@a</span>;</td>
      </tr>
      <tr>
        <td id="L222" class="blob-num js-line-number" data-line-number="222"></td>
        <td id="LC222" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L223" class="blob-num js-line-number" data-line-number="223"></td>
        <td id="LC223" class="blob-code blob-code-inner js-file-line">	<span class="pl-smi">$oids</span> = <span class="pl-c1">join</span>(<span class="pl-s"><span class="pl-pds">&#39;</span>L,<span class="pl-pds">&#39;</span></span>,<span class="pl-smi">@a</span>) . <span class="pl-s"><span class="pl-pds">&quot;</span>L<span class="pl-pds">&quot;</span></span>;</td>
      </tr>
      <tr>
        <td id="L224" class="blob-num js-line-number" data-line-number="224"></td>
        <td id="LC224" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-smi">$oids</span> <span class="pl-c1">ne</span> <span class="pl-s"><span class="pl-pds">&quot;</span>L<span class="pl-pds">&quot;</span></span>)</td>
      </tr>
      <tr>
        <td id="L225" class="blob-num js-line-number" data-line-number="225"></td>
        <td id="LC225" class="blob-code blob-code-inner js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L226" class="blob-num js-line-number" data-line-number="226"></td>
        <td id="LC226" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$oids</span> = <span class="pl-smi">$pref_oid</span> . <span class="pl-smi">$pref_sep</span> . <span class="pl-smi">$oids</span>;</td>
      </tr>
      <tr>
        <td id="L227" class="blob-num js-line-number" data-line-number="227"></td>
        <td id="LC227" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L228" class="blob-num js-line-number" data-line-number="228"></td>
        <td id="LC228" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L229" class="blob-num js-line-number" data-line-number="229"></td>
        <td id="LC229" class="blob-code blob-code-inner js-file-line">		{</td>
      </tr>
      <tr>
        <td id="L230" class="blob-num js-line-number" data-line-number="230"></td>
        <td id="LC230" class="blob-code blob-code-inner js-file-line">		<span class="pl-smi">$oids</span> = <span class="pl-smi">$pref_oid</span>;</td>
      </tr>
      <tr>
        <td id="L231" class="blob-num js-line-number" data-line-number="231"></td>
        <td id="LC231" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L232" class="blob-num js-line-number" data-line-number="232"></td>
        <td id="LC232" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span>(<span class="pl-smi">$oids</span>);</td>
      </tr>
      <tr>
        <td id="L233" class="blob-num js-line-number" data-line-number="233"></td>
        <td id="LC233" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
</table>

  </div>

</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" action="" class="js-jump-to-line-form" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="btn">Go</button>
</form></div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer" role="contentinfo">
    <ul class="site-footer-links right">
        <li><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
      <li><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
      <li><a href="https://shop.github.com" data-ga-click="Footer, go to shop, text:shop">Shop</a></li>
        <li><a href="https://github.com/blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a href="https://github.com/about" data-ga-click="Footer, go to about, text:about">About</a></li>

    </ul>

    <a href="https://github.com" aria-label="Homepage">
      <span class="mega-octicon octicon-mark-github" title="GitHub"></span>
</a>
    <ul class="site-footer-links">
      <li>&copy; 2015 <span title="0.03622s from github-fe133-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="https://github.com/site/terms" data-ga-click="Footer, go to terms, text:terms">Terms</a></li>
        <li><a href="https://github.com/site/privacy" data-ga-click="Footer, go to privacy, text:privacy">Privacy</a></li>
        <li><a href="https://github.com/security" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li><a href="https://github.com/contact" data-ga-click="Footer, go to contact, text:contact">Contact</a></li>
    </ul>
  </div>
</div>


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-suggester-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="fullscreen-contents js-fullscreen-contents" placeholder=""></textarea>
      <div class="suggester-container">
        <div class="suggester fullscreen-suggester js-suggester js-navigation-container"></div>
      </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped tooltipped-w" aria-label="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped tooltipped-w"
      aria-label="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    
    

    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-x flash-close js-ajax-error-dismiss" aria-label="Dismiss error"></a>
      Something went wrong with that request. Please try again.
    </div>


      <script crossorigin="anonymous" src="https://assets-cdn.github.com/assets/frameworks-2c8ae50712a47d2b83d740cb875d55cdbbb3fdbccf303951cc6b7e63731e0c38.js"></script>
      <script async="async" crossorigin="anonymous" src="https://assets-cdn.github.com/assets/github-6ef28f80a929515cb3e7e424363db63629a966b42acdf1666c433dc4b46de3db.js"></script>
      
      


  </body>
</html>

