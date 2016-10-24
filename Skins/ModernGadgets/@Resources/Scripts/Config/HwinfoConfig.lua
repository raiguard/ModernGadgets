-- HWINFO CONFIGURATION TOOL CONFIG
-- By iamanai
--

function Initialize() end

function Update() end

function FillIDs(prefix, suffix, base, hwinfoFilePath)

  hexPrefix = base:match("(%w+)%w")
  for i=1,7 do
    print(prefix .. i .. suffix .. '=' .. hexPrefix .. i)
    SKIN:Bang('!WriteKeyValue', 'Variables', prefix .. i .. suffix, hexPrefix .. i, hwinfoFilePath)
  end
end
