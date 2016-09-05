-- MODERNGADGETS GPU METER CONFIGURATION
-- By iamanai
--

function Initialize() end

function Update() end

function ConfigGpuIcon(state)

  if state == 'Intel' then
    SKIN:Bang('!SetOption', 'CpuImage', 'ImageName', '#*imgPath*#cpu.png')
    SKIN:Bang('!SetOption', 'CpuImage', 'ImageTint', '#*colorIntel*#')
    SKIN:Bang('!SetOption', 'CpuImage', 'X', '(#*contentMargin*# + 1)')
    SKIN:Bang('!SetOption', 'CpuImage', 'Y', '(#*contentMargin*# + 1)')
    SKIN:Bang('!SetOption', 'CpuImage', 'W', '13')
    SKIN:Bang('!SetOption', 'CpuImage', 'H', '13')
    SKIN:Bang('!UpdateMeter', 'CpuImage')
    SKIN:Bang('!Redraw')
  elseif state ~= 'AMD' then
    SKIN:Bang('!SetOption', 'CpuImage', 'ImageName', '#*imgPath*#cpu.png')
    SKIN:Bang('!SetOption', 'CpuImage', 'X', '(#*contentMargin*# + 1)')
    SKIN:Bang('!SetOption', 'CpuImage', 'Y', '(#*contentMargin*# + 1)')
    SKIN:Bang('!SetOption', 'CpuImage', 'W', '13')
    SKIN:Bang('!SetOption', 'CpuImage', 'H', '13')
    SKIN:Bang('!UpdateMeter', 'CpuImage')
    SKIN:Bang('!Redraw')
  end

end
