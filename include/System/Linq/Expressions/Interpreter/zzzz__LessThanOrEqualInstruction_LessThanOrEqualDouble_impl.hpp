#pragma once
#include "System/Linq/Expressions/Interpreter/zzzz__LessThanOrEqualInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LessThanOrEqualInstruction_LessThanOrEqualDouble_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble::*)(
    ::System::Object*)>(&::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1a98508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble::Run)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1a98dd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble*>::get(), 8));
    return ___internal_method;
  }
};
inline ::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble*
System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble::New_ctor(::System::Object* nullValue) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble*>(nullValue));
}
inline void System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble::_ctor(::System::Object* nullValue) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble*>::get(), ".ctor",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nullValue);
}
inline int32_t System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::__LessThanOrEqualInstruction__LessThanOrEqualDouble::__LessThanOrEqualInstruction__LessThanOrEqualDouble() {}
