#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphLogger)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphLogger
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphLogger*
class CORDL_TYPE RenderGraphLogger : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_CurrentBuilder, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentBuilder, put = __cordl_internal_set_m_CurrentBuilder))::System::Text::StringBuilder* m_CurrentBuilder;

  /// @brief Field m_CurrentIndentation, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentIndentation, put = __cordl_internal_set_m_CurrentIndentation)) int32_t m_CurrentIndentation;

  /// @brief Field m_LogMap, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LogMap, put = __cordl_internal_set_m_LogMap))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Text::StringBuilder*>* m_LogMap;

  /// @brief Method DecrementIndentation, addr 0x1bc7980, size 0x7c, virtual false, abstract: false, final false
  inline void DecrementIndentation(int32_t value);

  /// @brief Method GetAllLogs, addr 0x1bc7bf8, size 0x1b4, virtual false, abstract: false, final false
  inline ::StringW GetAllLogs();

  /// @brief Method GetLog, addr 0x1bc7b58, size 0xa0, virtual false, abstract: false, final false
  inline ::StringW GetLog(::StringW logName);

  /// @brief Method IncrementIndentation, addr 0x1bc78ac, size 0x70, virtual false, abstract: false, final false
  inline void IncrementIndentation(int32_t value);

  /// @brief Method Initialize, addr 0x1bc79fc, size 0xe4, virtual false, abstract: false, final false
  inline void Initialize(::StringW logName);

  /// @brief Method LogLine, addr 0x1bc7ae0, size 0x78, virtual false, abstract: false, final false
  inline void LogLine(::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* New_ctor();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_m_CurrentBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get_m_CurrentBuilder() const;

  constexpr int32_t const& __cordl_internal_get_m_CurrentIndentation() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentIndentation();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Text::StringBuilder*>*& __cordl_internal_get_m_LogMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Text::StringBuilder*>*> const& __cordl_internal_get_m_LogMap() const;

  constexpr void __cordl_internal_set_m_CurrentBuilder(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_m_CurrentIndentation(int32_t value);

  constexpr void __cordl_internal_set_m_LogMap(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Text::StringBuilder*>* value);

  /// @brief Method .ctor, addr 0x1bc7dac, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphLogger(RenderGraphLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphLogger(RenderGraphLogger const&) = delete;

  /// @brief Field m_LogMap, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Text::StringBuilder*>* ___m_LogMap;

  /// @brief Field m_CurrentBuilder, offset: 0x18, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___m_CurrentBuilder;

  /// @brief Field m_CurrentIndentation, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_CurrentIndentation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger, ___m_LogMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger, ___m_CurrentBuilder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger, ___m_CurrentIndentation) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphLogger");
