#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StencilState)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct CompareFunction;
}
namespace UnityEngine::Rendering {
struct StencilOp;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct StencilState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::StencilState);
// Type: UnityEngine.Rendering::StencilState
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::StencilState
struct CORDL_TYPE StencilState {
public:
  // Declarations
  __declspec(property(get = get_compareFunctionBack, put = set_compareFunctionBack))::UnityEngine::Rendering::CompareFunction compareFunctionBack;

  __declspec(property(get = get_compareFunctionFront, put = set_compareFunctionFront))::UnityEngine::Rendering::CompareFunction compareFunctionFront;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  __declspec(property(get = get_failOperationBack, put = set_failOperationBack))::UnityEngine::Rendering::StencilOp failOperationBack;

  __declspec(property(get = get_failOperationFront, put = set_failOperationFront))::UnityEngine::Rendering::StencilOp failOperationFront;

  __declspec(property(get = get_passOperationBack, put = set_passOperationBack))::UnityEngine::Rendering::StencilOp passOperationBack;

  __declspec(property(get = get_passOperationFront, put = set_passOperationFront))::UnityEngine::Rendering::StencilOp passOperationFront;

  __declspec(property(get = get_readMask, put = set_readMask)) uint8_t readMask;

  __declspec(property(get = get_writeMask, put = set_writeMask)) uint8_t writeMask;

  __declspec(property(get = get_zFailOperationBack, put = set_zFailOperationBack))::UnityEngine::Rendering::StencilOp zFailOperationBack;

  __declspec(property(get = get_zFailOperationFront, put = set_zFailOperationFront))::UnityEngine::Rendering::StencilOp zFailOperationFront;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::StencilState>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::StencilState>*();

  /// @brief Method Equals, addr 0x2a95838, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2a95788, size 0xb0, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::StencilState other);

  /// @brief Method GetHashCode, addr 0x2a958b4, size 0xf0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method SetCompareFunction, addr 0x2a956d8, size 0xc, virtual false, abstract: false, final false
  inline void SetCompareFunction(::UnityEngine::Rendering::CompareFunction value);

  /// @brief Method SetFailOperation, addr 0x2a95710, size 0xc, virtual false, abstract: false, final false
  inline void SetFailOperation(::UnityEngine::Rendering::StencilOp value);

  /// @brief Method SetPassOperation, addr 0x2a956f4, size 0xc, virtual false, abstract: false, final false
  inline void SetPassOperation(::UnityEngine::Rendering::StencilOp value);

  /// @brief Method SetZFailOperation, addr 0x2a9572c, size 0xc, virtual false, abstract: false, final false
  inline void SetZFailOperation(::UnityEngine::Rendering::StencilOp value);

  /// @brief Method .ctor, addr 0x2a954e0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool enabled, uint8_t readMask, uint8_t writeMask, ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::StencilOp passOperation,
                    ::UnityEngine::Rendering::StencilOp failOperation, ::UnityEngine::Rendering::StencilOp zFailOperation);

  /// @brief Method .ctor, addr 0x2a9550c, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(bool enabled, uint8_t readMask, uint8_t writeMask, ::UnityEngine::Rendering::CompareFunction compareFunctionFront, ::UnityEngine::Rendering::StencilOp passOperationFront,
                    ::UnityEngine::Rendering::StencilOp failOperationFront, ::UnityEngine::Rendering::StencilOp zFailOperationFront, ::UnityEngine::Rendering::CompareFunction compareFunctionBack,
                    ::UnityEngine::Rendering::StencilOp passOperationBack, ::UnityEngine::Rendering::StencilOp failOperationBack, ::UnityEngine::Rendering::StencilOp zFailOperationBack);

  /// @brief Method get_compareFunctionBack, addr 0x2a95768, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CompareFunction get_compareFunctionBack();

  /// @brief Method get_compareFunctionFront, addr 0x2a95748, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CompareFunction get_compareFunctionFront();

  /// @brief Method get_defaultValue, addr 0x2a95484, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::StencilState get_defaultValue();

  /// @brief Method get_enabled, addr 0x2a955f0, size 0x5c, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_failOperationBack, addr 0x2a95778, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::StencilOp get_failOperationBack();

  /// @brief Method get_failOperationFront, addr 0x2a95758, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::StencilOp get_failOperationFront();

  /// @brief Method get_passOperationBack, addr 0x2a95770, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::StencilOp get_passOperationBack();

  /// @brief Method get_passOperationFront, addr 0x2a95750, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::StencilOp get_passOperationFront();

  /// @brief Method get_readMask, addr 0x2a956b8, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_readMask();

  /// @brief Method get_writeMask, addr 0x2a956c8, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_writeMask();

  /// @brief Method get_zFailOperationBack, addr 0x2a95780, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::StencilOp get_zFailOperationBack();

  /// @brief Method get_zFailOperationFront, addr 0x2a95760, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::StencilOp get_zFailOperationFront();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::StencilState>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::StencilState>* i___System__IEquatable_1___UnityEngine__Rendering__StencilState_();

  /// @brief Method set_compareFunctionBack, addr 0x2a956ec, size 0x8, virtual false, abstract: false, final false
  inline void set_compareFunctionBack(::UnityEngine::Rendering::CompareFunction value);

  /// @brief Method set_compareFunctionFront, addr 0x2a956e4, size 0x8, virtual false, abstract: false, final false
  inline void set_compareFunctionFront(::UnityEngine::Rendering::CompareFunction value);

  /// @brief Method set_enabled, addr 0x2a9564c, size 0x6c, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method set_failOperationBack, addr 0x2a95724, size 0x8, virtual false, abstract: false, final false
  inline void set_failOperationBack(::UnityEngine::Rendering::StencilOp value);

  /// @brief Method set_failOperationFront, addr 0x2a9571c, size 0x8, virtual false, abstract: false, final false
  inline void set_failOperationFront(::UnityEngine::Rendering::StencilOp value);

  /// @brief Method set_passOperationBack, addr 0x2a95708, size 0x8, virtual false, abstract: false, final false
  inline void set_passOperationBack(::UnityEngine::Rendering::StencilOp value);

  /// @brief Method set_passOperationFront, addr 0x2a95700, size 0x8, virtual false, abstract: false, final false
  inline void set_passOperationFront(::UnityEngine::Rendering::StencilOp value);

  /// @brief Method set_readMask, addr 0x2a956c0, size 0x8, virtual false, abstract: false, final false
  inline void set_readMask(uint8_t value);

  /// @brief Method set_writeMask, addr 0x2a956d0, size 0x8, virtual false, abstract: false, final false
  inline void set_writeMask(uint8_t value);

  /// @brief Method set_zFailOperationBack, addr 0x2a95740, size 0x8, virtual false, abstract: false, final false
  inline void set_zFailOperationBack(::UnityEngine::Rendering::StencilOp value);

  /// @brief Method set_zFailOperationFront, addr 0x2a95738, size 0x8, virtual false, abstract: false, final false
  inline void set_zFailOperationFront(::UnityEngine::Rendering::StencilOp value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StencilState();

  // Ctor Parameters [CppParam { name: "m_Enabled", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_ReadMask", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_WriteMask", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_Padding", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_CompareFunctionFront", ty:
  // "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_PassOperationFront", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_FailOperationFront", ty: "uint8_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_ZFailOperationFront", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_CompareFunctionBack", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_PassOperationBack", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_FailOperationBack", ty: "uint8_t", modifiers: "", def_value:
  // None }, CppParam { name: "m_ZFailOperationBack", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr StencilState(uint8_t m_Enabled, uint8_t m_ReadMask, uint8_t m_WriteMask, uint8_t m_Padding, uint8_t m_CompareFunctionFront, uint8_t m_PassOperationFront, uint8_t m_FailOperationFront,
                         uint8_t m_ZFailOperationFront, uint8_t m_CompareFunctionBack, uint8_t m_PassOperationBack, uint8_t m_FailOperationBack, uint8_t m_ZFailOperationBack) noexcept;

  /// @brief Field m_Enabled, offset: 0x0, size: 0x1, def value: None
  uint8_t m_Enabled;

  /// @brief Field m_ReadMask, offset: 0x1, size: 0x1, def value: None
  uint8_t m_ReadMask;

  /// @brief Field m_WriteMask, offset: 0x2, size: 0x1, def value: None
  uint8_t m_WriteMask;

  /// @brief Field m_Padding, offset: 0x3, size: 0x1, def value: None
  uint8_t m_Padding;

  /// @brief Field m_CompareFunctionFront, offset: 0x4, size: 0x1, def value: None
  uint8_t m_CompareFunctionFront;

  /// @brief Field m_PassOperationFront, offset: 0x5, size: 0x1, def value: None
  uint8_t m_PassOperationFront;

  /// @brief Field m_FailOperationFront, offset: 0x6, size: 0x1, def value: None
  uint8_t m_FailOperationFront;

  /// @brief Field m_ZFailOperationFront, offset: 0x7, size: 0x1, def value: None
  uint8_t m_ZFailOperationFront;

  /// @brief Field m_CompareFunctionBack, offset: 0x8, size: 0x1, def value: None
  uint8_t m_CompareFunctionBack;

  /// @brief Field m_PassOperationBack, offset: 0x9, size: 0x1, def value: None
  uint8_t m_PassOperationBack;

  /// @brief Field m_FailOperationBack, offset: 0xa, size: 0x1, def value: None
  uint8_t m_FailOperationBack;

  /// @brief Field m_ZFailOperationBack, offset: 0xb, size: 0x1, def value: None
  uint8_t m_ZFailOperationBack;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::StencilState, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::StencilState, m_Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::StencilState, m_ReadMask) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::StencilState, m_WriteMask) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::StencilState, m_Padding) == 0x3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::StencilState, m_CompareFunctionFront) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::StencilState, m_PassOperationFront) == 0x5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::StencilState, m_FailOperationFront) == 0x6, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::StencilState, m_ZFailOperationFront) == 0x7, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::StencilState, m_CompareFunctionBack) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::StencilState, m_PassOperationBack) == 0x9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::StencilState, m_FailOperationBack) == 0xa, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::StencilState, m_ZFailOperationBack) == 0xb, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::StencilState, "UnityEngine.Rendering", "StencilState");
