-- MODERNGADGETS GPU METER CONFIGURATION
-- By iamanai
--

function Initialize() end

function Update() end

function ConfigGpuIcon(state)

  if state == 'Intel' then
    SKIN:Bang('!SetOption', 'GpuLogoImage', 'ImageTint', '#*colorIntel*#')
    SKIN:Bang('!UpdateMeter', 'GpuLogoImage')
  elseif state == "NVIDIA" then
    SKIN:Bang('!SetOption', 'GpuLogoImage', 'ImageName', '#*imgPath*#nvidia.png')
    SKIN:Bang('!SetOption', 'GpuLogoImage', 'ImageTint', '')
    SKIN:Bang('!SetOption', 'GpuLogoImage', 'X', '(#*contentMargin*# + 1)')
    SKIN:Bang('!SetOption', 'GpuLogoImage', 'Y', '(#*contentMargin*#)')
    SKIN:Bang('!SetOption', 'GpuLogoImage', 'W', '13')
    SKIN:Bang('!SetOption', 'GpuLogoImage', 'H', '13')
    SKIN:Bang('!UpdateMeter', 'GpuLogoImage')
  elseif state == 'AMD' then
    SKIN:Bang('!SetOption', 'GpuLogoImage', 'ImageName', '#*imgPath*#amd.png')
    SKIN:Bang('!SetOption', 'GpuLogoImage', 'X', '(#*contentMargin*# + 1)')
    SKIN:Bang('!SetOption', 'GpuLogoImage', 'Y', '(#*contentMargin*# + 1)')
    SKIN:Bang('!SetOption', 'GpuLogoImage', 'W', '11')
    SKIN:Bang('!SetOption', 'GpuLogoImage', 'H', '11')
    SKIN:Bang('!UpdateMeter', 'GpuLogoImage')
  end
end
