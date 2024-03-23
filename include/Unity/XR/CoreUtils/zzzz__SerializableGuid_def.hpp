#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializableGuid)
namespace System {
struct Guid;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
struct SerializableGuid;
}
// Write type traits
MARK_VAL_T(::Unity::XR::CoreUtils::SerializableGuid);
// Type: Unity.XR.CoreUtils::SerializableGuid
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: true
// CS Name: ::Unity.XR.CoreUtils::SerializableGuid
struct CORDL_TYPE SerializableGuid {
public:
  // Declarations
  __declspec(property(get = get_Guid))::System::Guid Guid;

  /// @brief Field k_Empty, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_k_Empty, put = setStaticF_k_Empty))::Unity::XR::CoreUtils::SerializableGuid k_Empty;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::XR::CoreUtils::SerializableGuid>"
  constexpr operator ::System::IEquatable_1<::Unity::XR::CoreUtils::SerializableGuid>*();

  /// @brief Method Equals, addr 0x287f3c4, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x287f44c, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::Unity::XR::CoreUtils::SerializableGuid other);

  /// @brief Method GetHashCode, addr 0x287f388, size 0x3c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x287f470, size 0x30, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x287f4a0, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x287f4dc, size 0x4c, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method .ctor, addr 0x287f380, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint64_t guidLow, uint64_t guidHigh);

  static inline ::Unity::XR::CoreUtils::SerializableGuid getStaticF_k_Empty();

  /// @brief Method get_Empty, addr 0x287f31c, size 0x58, virtual false, abstract: false, final false
  static inline ::Unity::XR::CoreUtils::SerializableGuid get_Empty();

  /// @brief Method get_Guid, addr 0x287f374, size 0xc, virtual false, abstract: false, final false
  inline ::System::Guid get_Guid();

  /// @brief Convert to "::System::IEquatable_1<::Unity::XR::CoreUtils::SerializableGuid>"
  constexpr ::System::IEquatable_1<::Unity::XR::CoreUtils::SerializableGuid>* i___System__IEquatable_1___Unity__XR__CoreUtils__SerializableGuid_();

  /// @brief Method op_Equality, addr 0x287f528, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Equality(::Unity::XR::CoreUtils::SerializableGuid lhs, ::Unity::XR::CoreUtils::SerializableGuid rhs);

  /// @brief Method op_Inequality, addr 0x287f540, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Unity::XR::CoreUtils::SerializableGuid lhs, ::Unity::XR::CoreUtils::SerializableGuid rhs);

  static inline void setStaticF_k_Empty(::Unity::XR::CoreUtils::SerializableGuid value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializableGuid();

  // Ctor Parameters [CppParam { name: "m_GuidLow", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_GuidHigh", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr SerializableGuid(uint64_t m_GuidLow, uint64_t m_GuidHigh) noexcept;

  /// @brief Field m_GuidLow, offset: 0x0, size: 0x8, def value: None
  uint64_t m_GuidLow;

  /// @brief Field m_GuidHigh, offset: 0x8, size: 0x8, def value: None
  uint64_t m_GuidHigh;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::SerializableGuid, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::SerializableGuid, m_GuidLow) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::SerializableGuid, m_GuidHigh) == 0x8, "Offset mismatch!");

} // namespace Unity::XR::CoreUtils
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::SerializableGuid, "Unity.XR.CoreUtils", "SerializableGuid");
