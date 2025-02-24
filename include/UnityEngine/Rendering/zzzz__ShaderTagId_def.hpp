#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderTagId)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShaderTagId);
// Type: UnityEngine.Rendering::ShaderTagId
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::ShaderTagId
struct CORDL_TYPE ShaderTagId {
public:
  // Declarations
  __declspec(property(get = get_id, put = set_id)) int32_t id;

  /// @brief Field none, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_none, put = setStaticF_none))::UnityEngine::Rendering::ShaderTagId none;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ShaderTagId>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::ShaderTagId>*();

  /// @brief Method Equals, addr 0x2a92b74, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2a92bec, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::ShaderTagId other);

  /// @brief Method GetHashCode, addr 0x2a92bfc, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x2a92b44, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_none();

  /// @brief Method get_id, addr 0x2a92b64, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_id();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ShaderTagId>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ShaderTagId>* i___System__IEquatable_1___UnityEngine__Rendering__ShaderTagId_();

  /// @brief Method op_Equality, addr 0x2a92c1c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::ShaderTagId tag1, ::UnityEngine::Rendering::ShaderTagId tag2);

  /// @brief Method op_Inequality, addr 0x2a92c28, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Rendering::ShaderTagId tag1, ::UnityEngine::Rendering::ShaderTagId tag2);

  static inline void setStaticF_none(::UnityEngine::Rendering::ShaderTagId value);

  /// @brief Method set_id, addr 0x2a92b6c, size 0x8, virtual false, abstract: false, final false
  inline void set_id(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderTagId();

  // Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ShaderTagId(int32_t m_Id) noexcept;

  /// @brief Field m_Id, offset: 0x0, size: 0x4, def value: None
  int32_t m_Id;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderTagId, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderTagId, m_Id) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderTagId, "UnityEngine.Rendering", "ShaderTagId");
