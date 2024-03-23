#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__ScriptableSettings_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InteractionLayerSettings)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractionLayerSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings);
// Type: UnityEngine.XR.Interaction.Toolkit::InteractionLayerSettings
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::InteractionLayerSettings*
class CORDL_TYPE InteractionLayerSettings
    : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSettings_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings>> {
public:
  // Declarations
  /// @brief Field m_LayerNames, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LayerNames, put = __cordl_internal_set_m_LayerNames))::ArrayW<::StringW, ::Array<::StringW>*> m_LayerNames;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method GetLayer, addr 0x2cfe27c, size 0x70, virtual false, abstract: false, final false
  inline int32_t GetLayer(::StringW layerName);

  /// @brief Method GetLayerNameAt, addr 0x2cfe1f8, size 0x30, virtual false, abstract: false, final false
  inline ::StringW GetLayerNameAt(int32_t index);

  /// @brief Method GetLayerNamesAndValues, addr 0x2cfe464, size 0x174, virtual false, abstract: false, final false
  inline void GetLayerNamesAndValues(::System::Collections::Generic::List_1<::StringW>* names, ::System::Collections::Generic::List_1<int32_t>* values);

  /// @brief Method IsLayerEmpty, addr 0x2cfe3cc, size 0x34, virtual false, abstract: false, final false
  inline bool IsLayerEmpty(int32_t index);

  static inline ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x2cfe6e0, size 0x4, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x2cfe5d8, size 0x108, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method SetLayerNameAt, addr 0x2cfe400, size 0x64, virtual false, abstract: false, final false
  inline void SetLayerNameAt(int32_t index, ::StringW layerName);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_LayerNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_LayerNames();

  constexpr void __cordl_internal_set_m_LayerNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x2cfe6e4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractionLayerSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteractionLayerSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractionLayerSettings(InteractionLayerSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractionLayerSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractionLayerSettings(InteractionLayerSettings const&) = delete;

  /// @brief Field m_LayerNames, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_LayerNames;

  /// @brief Field builtInLayerSize offset 0xffffffff size 0x4
  static constexpr int32_t builtInLayerSize{ static_cast<int32_t>(0x1) };

  /// @brief Field k_DefaultLayerName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DefaultLayerName{ u"Default" };

  /// @brief Field layerSize offset 0xffffffff size 0x4
  static constexpr int32_t layerSize{ static_cast<int32_t>(0x20) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings, ___m_LayerNames) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*, "UnityEngine.XR.Interaction.Toolkit", "InteractionLayerSettings");
