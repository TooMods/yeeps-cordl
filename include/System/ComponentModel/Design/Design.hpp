#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/ComponentModel/Design/CheckoutException.hpp"
#include "System/ComponentModel/Design/DesignerOptionService.hpp"
#include "System/ComponentModel/Design/DesigntimeLicenseContextSerializer.hpp"
#include "System/ComponentModel/Design/IComponentChangeService.hpp"
#include "System/ComponentModel/Design/IDesigner.hpp"
#include "System/ComponentModel/Design/IDesignerHost.hpp"
#include "System/ComponentModel/Design/IDictionaryService.hpp"
#include "System/ComponentModel/Design/IExtenderListService.hpp"
#include "System/ComponentModel/Design/IReferenceService.hpp"
#include "System/ComponentModel/Design/ITypeDescriptorFilterService.hpp"
#include "System/ComponentModel/Design/ITypeResolutionService.hpp"
#include "System/ComponentModel/Design/RuntimeLicenseContext.hpp"
#ifdef __cpp_modules
export module Design;
#endif
