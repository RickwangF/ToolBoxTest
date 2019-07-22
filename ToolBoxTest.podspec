#
# Be sure to run `pod lib lint ToolBoxTest.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ToolBoxTest'
  s.version          = '0.1.1'
  s.summary          = 'A Basic Library of Objective-C'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
                       A Basic Objective-C Library Uesd In My Company Project
                       DESC

  s.homepage         = 'https://github.com/RickwangF/ToolBoxTest'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'woshiwwy16@126.com' => 'woshiwwy16@126.com' }
  s.source           = { :git => 'https://github.com/RickwangF/ToolBoxTest.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'

  s.source_files = 'ToolBoxTest/Classes/**/*'
  s.vendored_frameworks = 'ToolBoxTest/*.{framework}'
  
  # s.resource_bundles = {
  #   'ToolBoxTest' => ['ToolBoxTest/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  s.frameworks = 'UIKit', 'Foundation'
  # s.dependency 'AFNetworking', '~> 2.3'
end
