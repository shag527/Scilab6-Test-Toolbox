try
    exec("unloader.sce");
    exec("cleaner.sce");
    ulink
    clear
catch
    msg = "First load the toolbox"
    error(msg);
end