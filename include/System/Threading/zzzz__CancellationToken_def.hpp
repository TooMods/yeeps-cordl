#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CancellationToken)
namespace System::Threading {
struct CancellationTokenRegistration;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
class __CancellationToken____c;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class __CancellationToken____c;
}
namespace System::Threading {
struct CancellationToken;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::__CancellationToken____c);
MARK_VAL_T(::System::Threading::CancellationToken);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::CancellationToken::<>c*
class CORDL_TYPE __CancellationToken____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Threading::__CancellationToken____c* __9;

  static inline ::System::Threading::__CancellationToken____c* New_ctor();

  /// @brief Method <.cctor>b__26_0, addr 0x10e5b4c, size 0x6c, virtual false, abstract: false, final false
  inline void __cctor_b__26_0(::System::Object* obj);

  /// @brief Method .ctor, addr 0x10e5b44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::__CancellationToken____c* getStaticF___9();

  static inline void setStaticF___9(::System::Threading::__CancellationToken____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CancellationToken____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CancellationToken____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CancellationToken____c(__CancellationToken____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CancellationToken____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CancellationToken____c(__CancellationToken____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__CancellationToken____c, 0x10>, "Size mismatch!");

} // namespace System::Threading
// Type: System.Threading::CancellationToken
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// CS Name: ::System.Threading::CancellationToken
struct CORDL_TYPE CancellationToken {
public:
  // Declarations
  using __c = ::System::Threading::__CancellationToken____c;

  __declspec(property(get = get_CanBeCanceled)) bool CanBeCanceled;

  __declspec(property(get = get_IsCancellationRequested)) bool IsCancellationRequested;

  /// @brief Field s_actionToActionObjShunt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_actionToActionObjShunt, put = setStaticF_s_actionToActionObjShunt))::System::Action_1<::System::Object*>* s_actionToActionObjShunt;

  /// @brief Method Equals, addr 0x10e5884, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x10e5874, size 0x10, virtual false, abstract: false, final false
  inline bool Equals(::System::Threading::CancellationToken other);

  /// @brief Method GetHashCode, addr 0x10e58fc, size 0x74, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method InternalRegisterWithoutEC, addr 0x10e54f4, size 0x38, virtual false, abstract: false, final false
  inline ::System::Threading::CancellationTokenRegistration InternalRegisterWithoutEC(::System::Action_1<::System::Object*>* callback, ::System::Object* state);

  /// @brief Method Register, addr 0x10e52a0, size 0xec, virtual false, abstract: false, final false
  inline ::System::Threading::CancellationTokenRegistration Register(::System::Action* callback);

  /// @brief Method Register, addr 0x10e54bc, size 0x38, virtual false, abstract: false, final false
  inline ::System::Threading::CancellationTokenRegistration Register(::System::Action_1<::System::Object*>* callback, ::System::Object* state);

  /// @brief Method Register, addr 0x10e538c, size 0x130, virtual false, abstract: false, final false
  inline ::System::Threading::CancellationTokenRegistration Register(::System::Action_1<::System::Object*>* callback, ::System::Object* state, bool useSynchronizationContext,
                                                                     bool useExecutionContext);

  /// @brief Method ThrowIfCancellationRequested, addr 0x10e5988, size 0x38, virtual false, abstract: false, final false
  inline void ThrowIfCancellationRequested();

  /// @brief Method ThrowOperationCanceledException, addr 0x10e59c0, size 0x5c, virtual false, abstract: false, final false
  inline void ThrowOperationCanceledException();

  /// @brief Method .ctor, addr 0x10e522c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(bool canceled);

  /// @brief Method .ctor, addr 0x10e5224, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::CancellationTokenSource* source);

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_actionToActionObjShunt();

  /// @brief Method get_CanBeCanceled, addr 0x10e5214, size 0x10, virtual false, abstract: false, final false
  inline bool get_CanBeCanceled();

  /// @brief Method get_IsCancellationRequested, addr 0x10e51cc, size 0x2c, virtual false, abstract: false, final false
  inline bool get_IsCancellationRequested();

  /// @brief Method get_None, addr 0x10e51c4, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Threading::CancellationToken get_None();

  /// @brief Method op_Equality, addr 0x10e5970, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Threading::CancellationToken left, ::System::Threading::CancellationToken right);

  /// @brief Method op_Inequality, addr 0x10e597c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Threading::CancellationToken left, ::System::Threading::CancellationToken right);

  static inline void setStaticF_s_actionToActionObjShunt(::System::Action_1<::System::Object*>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CancellationToken();

  // Ctor Parameters [CppParam { name: "_source", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None }]
  constexpr CancellationToken(::System::Threading::CancellationTokenSource* _source) noexcept;

  /// @brief Field _source, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* _source;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::CancellationToken, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Threading::CancellationToken, _source) == 0x0, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::__CancellationToken____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__CancellationToken____c*, "System.Threading", "CancellationToken/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CancellationToken, "System.Threading", "CancellationToken");
