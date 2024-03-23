#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GA_Debug)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GameAnalyticsSDK::Events {
class GA_Debug;
}
// Write type traits
MARK_REF_PTR_T(::GameAnalyticsSDK::Events::GA_Debug);
// Type: GameAnalyticsSDK.Events::GA_Debug
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Events {
// Is value type: false
// CS Name: ::GameAnalyticsSDK.Events::GA_Debug*
class CORDL_TYPE GA_Debug : public ::System::Object {
public:
  // Declarations
  /// @brief Field MaxErrorCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MaxErrorCount, put = setStaticF_MaxErrorCount)) int32_t MaxErrorCount;

  /// @brief Field Messages, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Messages, put = setStaticF_Messages))::System::Collections::Generic::List_1<::StringW>* Messages;

  /// @brief Field _errorCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__errorCount, put = setStaticF__errorCount)) int32_t _errorCount;

  /// @brief Field _showLogOnGUI, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__showLogOnGUI, put = setStaticF__showLogOnGUI)) bool _showLogOnGUI;

  /// @brief Method EnabledLog, addr 0x108266c, size 0x5c, virtual false, abstract: false, final false
  static inline void EnabledLog();

  /// @brief Method HandleLog, addr 0x10822e8, size 0x34c, virtual false, abstract: false, final false
  static inline void HandleLog(::StringW logString, ::StringW stackTrace, ::UnityEngine::LogType type);

  /// @brief Method SubmitError, addr 0x1082634, size 0x30, virtual false, abstract: false, final false
  static inline void SubmitError(::StringW message, ::UnityEngine::LogType type);

  static inline int32_t getStaticF_MaxErrorCount();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_Messages();

  static inline int32_t getStaticF__errorCount();

  static inline bool getStaticF__showLogOnGUI();

  static inline void setStaticF_MaxErrorCount(int32_t value);

  static inline void setStaticF_Messages(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF__errorCount(int32_t value);

  static inline void setStaticF__showLogOnGUI(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GA_Debug();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GA_Debug", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GA_Debug(GA_Debug&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GA_Debug", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GA_Debug(GA_Debug const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Events::GA_Debug, 0x10>, "Size mismatch!");

} // namespace GameAnalyticsSDK::Events
NEED_NO_BOX(::GameAnalyticsSDK::Events::GA_Debug);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Events::GA_Debug*, "GameAnalyticsSDK.Events", "GA_Debug");
