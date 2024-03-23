#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphResourceType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceHandle)
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct RenderGraphResourceType;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct ResourceHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::ResourceHandle
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::ResourceHandle
struct CORDL_TYPE ResourceHandle {
public:
  // Declarations
  __declspec(property(get = get_iType)) int32_t iType;

  __declspec(property(get = get_index)) int32_t index;

  /// @brief Field s_CurrentValidBit, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_CurrentValidBit, put = setStaticF_s_CurrentValidBit)) uint32_t s_CurrentValidBit;

  /// @brief Field s_SharedResourceValidBit, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_SharedResourceValidBit, put = setStaticF_s_SharedResourceValidBit)) uint32_t s_SharedResourceValidBit;

  __declspec(property(get = get_type, put = set_type))::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType type;

  /// @brief Method IsValid, addr 0x1bc8f50, size 0xa0, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method NewFrame, addr 0x1bca9b0, size 0xc0, virtual false, abstract: false, final false
  static inline void NewFrame(int32_t executionIndex);

  /// @brief Method .ctor, addr 0x1bc8db0, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t value, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType type, bool shared);

  static inline uint32_t getStaticF_s_CurrentValidBit();

  static inline uint32_t getStaticF_s_SharedResourceValidBit();

  /// @brief Method get_iType, addr 0x1bc8c74, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_iType();

  /// @brief Method get_index, addr 0x1bcac70, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_type, addr 0x1bcc910, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType get_type();

  /// @brief Method op_Implicit, addr 0x1bca130, size 0x8, virtual false, abstract: false, final false
  static inline int32_t op_Implicit_int32_t(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle handle);

  static inline void setStaticF_s_CurrentValidBit(uint32_t value);

  static inline void setStaticF_s_SharedResourceValidBit(uint32_t value);

  /// @brief Method set_type, addr 0x1bcc918, size 0x8, virtual false, abstract: false, final false
  inline void set_type(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceHandle();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_type_k__BackingField", ty:
  // "::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType", modifiers: "", def_value: None }]
  constexpr ResourceHandle(uint32_t m_Value, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType _type_k__BackingField) noexcept;

  /// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
  uint32_t m_Value;

  /// @brief Field <type>k__BackingField, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType _type_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field kIndexMask offset 0xffffffff size 0x4
  static constexpr uint32_t kIndexMask{ static_cast<uint32_t>(0xffff00c0u) };

  /// @brief Field kValidityMask offset 0xffffffff size 0x4
  static constexpr uint32_t kValidityMask{ static_cast<uint32_t>(0xff0000f0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle, _type_k__BackingField) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle, "UnityEngine.Experimental.Rendering.RenderGraphModule", "ResourceHandle");
