#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CSMUtilities)
namespace Amazon::Runtime::Internal {
class MonitoringAPICallAttempt;
}
namespace Amazon::Runtime::Internal {
class MonitoringAPICallEvent;
}
namespace Amazon::Runtime::Internal {
class MonitoringAPICall;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Threading::Tasks {
class Task;
}
namespace ThirdParty::Json::LitJson {
class JsonWriter;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class CSMUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::CSMUtilities);
// Type: Amazon.Runtime.Internal::CSMUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::CSMUtilities*
class CORDL_TYPE CSMUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateUDPMessage, addr 0x23d4ccc, size 0x25c, virtual false, abstract: false, final false
  static inline ::ThirdParty::Json::LitJson::JsonWriter* CreateUDPMessage(::Amazon::Runtime::Internal::MonitoringAPICall* monitoringAPICall, ::ThirdParty::Json::LitJson::JsonWriter* jw);

  /// @brief Method CreateUDPMessage, addr 0x23d4044, size 0x42c, virtual false, abstract: false, final false
  static inline bool CreateUDPMessage(::Amazon::Runtime::Internal::MonitoringAPICallAttempt* monitoringAPICallAttempt, ByRef<::StringW> response);

  /// @brief Method CreateUDPMessage, addr 0x23d4470, size 0x2f8, virtual false, abstract: false, final false
  static inline bool CreateUDPMessage(::Amazon::Runtime::Internal::MonitoringAPICallEvent* monitoringAPICallEvent, ByRef<::StringW> response);

  /// @brief Method GetApiNameFromRequest, addr 0x23d48dc, size 0x3f0, virtual false, abstract: false, final false
  static inline ::StringW GetApiNameFromRequest(::StringW requestName, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* serviceApiNameMapping, ::StringW serviceName);

  /// @brief Method SerializetoJsonAndPostOverUDP, addr 0x23d4768, size 0x174, virtual false, abstract: false, final false
  static inline void SerializetoJsonAndPostOverUDP(::Amazon::Runtime::Internal::MonitoringAPICall* monitoringAPICall);

  /// @brief Method SerializetoJsonAndPostOverUDPAsync, addr 0x23d3e50, size 0x1f4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* SerializetoJsonAndPostOverUDPAsync(::Amazon::Runtime::Internal::MonitoringAPICall* monitoringAPICall);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CSMUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CSMUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CSMUtilities(CSMUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CSMUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CSMUtilities(CSMUtilities const&) = delete;

  /// @brief Field requestKey offset 0xffffffff size 0x8
  static constexpr ::ConstString requestKey{ u"Request" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::CSMUtilities, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::CSMUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::CSMUtilities*, "Amazon.Runtime.Internal", "CSMUtilities");
