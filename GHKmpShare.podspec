Pod::Spec.new do |s|

  s.name         = 'GHKmpShare'
  s.version      = '0.1.0'
  s.summary      = 'GHKmpShare.'

  s.homepage     = 'git@github.com:GoveeHomeApp/GHKmpShare.git'

  s.license      = { :type => 'MIT', :file => 'LICENSE' }

  s.author       = 'sy'

  s.ios.deployment_target = '13.0'

  s.swift_version = '5.0'

  s.source       = { :git => 'git@github.com:GoveeHomeApp/GHKmpShare.git', :tag => s.version.to_s }

  s.source_files = 'GHKmpShare/Classes/**/*'
  
  s.info_plist = { 'GHModular' => 'GHKmpShare.KMPShareModule' }

  s.vendored_frameworks = ['Shared.xcframework']

  s.pod_target_xcconfig = {
    'DEFINES_MODULE' => 'YES',
    'VALID_ARCHS' => 'arm64 x86_64'
  }

  s.dependency 'HandyJSON'
  s.dependency 'GHConnector'

end
